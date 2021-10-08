#include <iostream>
#include <queue>
#include "TreeNode.h"

using namespace std;

/*
	1.  takeInputTree()
	2.  takeInputLevelWise()
	3.  printTree()
	4.  printLevelWise()
	5.  printAtLevelK()
	6.  numOfNode()
	7.  sumOfNodes()
	8.  numLeafNodes()
	9.  height()
	10. preOrder()
	11. postOrder()
	12. deleteTree()
*/


TreeNode<int> *takeInputTree() {

	int rootData;
	cout<<"Enter Data "<<endl;
	cin>>rootData;

	TreeNode<int> *root = new TreeNode<int>(rootData);

	int n;
	cout<<"Enter num of children "<<endl;
	cin>>n;

	for (int i = 0; i < n; i++)
	{
		TreeNode<int> *child = takeInputTree();
		root->children.push_back(child);
	}

	return root;

}


TreeNode<int> *takeInputLevelWise() {

	int rootData;
	cout<<"Enter Data "<<endl;
	cin>>rootData;

	TreeNode<int> *root = new TreeNode<int>(rootData);

	queue<TreeNode<int>*> pendingNode;

	pendingNode.push(root);

	while(pendingNode.size() != 0) {

		TreeNode<int> *front = pendingNode.front();
		pendingNode.pop();

		cout<<"Enter num of children of "<<front->data<<endl;
		int numChild;
		cin>>numChild;

		for(int i=0; i < numChild; i++)
		{
			int childData;
			cout<<"Enter "<<i<<"th child of "<<front->data<<endl;
			cin>>childData;

			TreeNode<int> *child = new TreeNode<int>(childData);
			front->children.push_back(child);
			pendingNode.push(child);
		}
	}

	return root;

}


void printTree(TreeNode<int> *root) {

	if (root==NULL)
	{
		return;
	}

	cout<<root->data<<" : ";

	for (int i = 0; i < root->children.size(); i++)
	{
		cout<<root->children[i]->data;

		if(i<root->children.size()-1) {
			cout<<",";
		}
	}

	cout<<endl;

	for (int i = 0; i < root->children.size(); i++)
	{
		printTree(root->children[i]);
	}

}

void printLevelWise(TreeNode<int>* root) {

	if(root==NULL) {
		cout<<"Root is NULL";
		return;
	}

	queue<TreeNode<int>*> pendingNode;
	pendingNode.push(root);

	while(!pendingNode.empty()) {

		TreeNode<int> *front = pendingNode.front();
		pendingNode.pop();

		cout<<front->data<<":";

		for(int i=0; i< front->children.size(); i++) {

			cout<<front->children[i]->data;

			if(i<front->children.size() - 1)
				cout<<",";

			pendingNode.push(front->children[i]);
		}

		cout<<endl;



	}
}

void printAtLevelK(TreeNode<int> *root, int k) {

	if(root==NULL)
		return;

	if(k==0) {
		cout<<root->data<<endl;
		return;
	}

	for (int i = 0; i < root->children.size(); i++)
	{
		printAtLevelK(root->children[i], k-1);
	}

}


int numOfNode(TreeNode<int> *root) {

	if(root==NULL) {
		cout<<"Root is NULL";
		return 0;
	}
	
	int ans = 1;

	for (int i = 0; i < root->children.size(); i++)
	{
		ans += numOfNode(root->children[i]);
	}

	return ans;
}


int sumOfNodes(TreeNode<int>* root) {

	if(root==NULL) {
		cout<<"Root is NULL";
		return 0;
	}
    
    int ans = root->data;
    
    for(int i=0; i<root->children.size(); i++) {
        
        ans += sumOfNodes(root->children[i]);
    }
    
    return ans;
    
}


int numLeafNodes(TreeNode<int>* root) {

	if(root==NULL) {
		cout<<"Root is NULL";
		return 0;
	}
    
    int ans = 0;
    
    if(root->children.size() == 0) {
        ans++;
    }
    
    for(int i=0; i<root->children.size(); i++) {
        ans += numLeafNodes(root->children[i]);
    }
    
    return ans;
}



int height(TreeNode<int>* root) {

	if(root==NULL) {
		cout<<"Root is NULL";
		return 0;
	}
    
    int ans = 0;
    
    for(int i=0; i<root->children.size(); i++) {
        
        int childHeight = height(root->children[i]);
        
        if (childHeight> ans)
            ans = childHeight;
    }
    
    return ans+1;

}

void preOrder(TreeNode<int> *root) {

	if (root==NULL) {
		cout<<"Root is NULL";
		return;
	}

	cout<<root->data<<" ";

	for (int i = 0; i < root->children.size(); i++)
	{
		preOrder(root->children[i]);
	}
}


void postOrder(TreeNode<int>* root) {
    
    if(root==NULL) {
    	cout<<"Root is NULL";
        return;
    }
    
    for(int i=0; i<root->children.size(); i++) {
        postOrder(root->children[i]);
    }
    
    cout<<root->data<<" ";

}


//Segmentic Error
void deleteTree(TreeNode<int> *root) {

	for(int i=0; i<root->children.size(); i++) {

		deleteTree(root->children[i]);
	}

	delete root;
}




//1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0


int main() {

	// TreeNode<int> *root = new TreeNode<int>(1);
	// TreeNode<int> *node1 = new TreeNode<int>(2);
	// TreeNode<int> *node2 = new TreeNode<int>(3);


	// root->children.push_back(node1);
	// root->children.push_back(node2); 


	//TreeNode<int> *root = takeInputTree();

	TreeNode<int> *root = takeInputLevelWise();

	cout<<"Node"<<numOfNode(root)<<endl;

	cout<<"preOrder : ";
	preOrder(root);

	cout<<endl;

	cout<<"postOrder : ";
	postOrder(root);

	cout<<endl;

	printTree(root);

	cout<<"numOfNode : "<<numOfNode(root);
	cout<<endl;

    cout<<"sumOfNodes : "<< sumOfNodes(root);
	cout<<endl;

	cout<<"numLeafNodes : "<<numLeafNodes(root);
	cout<<endl;

    cout<<"height : "<<height(root);
	cout<<endl;

	delete root;
}