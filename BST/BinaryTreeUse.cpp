
//  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦
//✦   ✦  ✦  ✦ Created by Shreyansh Raj Keshri.  ✦  ✦  ✦
//  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦  ✦

#include <iostream>
#include "BinaryTreeNode.h"
#include <queue>

using namespace std;

/*
	■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■
	■■■■■■■■■■■■■■■■■■| Notes |■■■■■■■■■■■■■■■■■■■■■■■■■■
	■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

	◉ Binary Search Tree have max 2 child.

*/


void printTree(BinaryTreeNode<int>* root) {
	if (root==NULL) {
		return;
	}

	cout<<root->data<<" : ";

	if (root->left != NULL) {
		cout<<"L"<<root->left->data<<" ";
	}

	if (root->right != NULL) {
		cout<<"R"<<root->right->data;
	}

	cout<<endl;
	printTree(root->left);
	printTree(root->right);
}


//1 2 -1 -1 3 -1 -1
//1 2 4 -1 -1 5 -1 -1 3 -1 6 7 -1 -1 -1
BinaryTreeNode<int>* takeTree() {
	int rootData;

	// cout<<"Enter Data : "<<endl;
	cin>>rootData;

	if (rootData == -1) {
		return NULL;
	}

	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

	root->left = takeTree();
	root->right = takeTree();

	return root;
}


//1 2 3 4 5 -1 6 -1 -1 -1 -1 7 -1 -1 -1 
BinaryTreeNode<int>* takeTreeLevelWise() {
	int rootData;

	// cout<<"Enter Root Data : "<<endl;
	cin>>rootData;

	if (rootData == -1) {
		return NULL;
	}

	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

	queue<BinaryTreeNode<int>*> pendingNode;
	pendingNode.push(root);

	while(pendingNode.size() != 0) {
		BinaryTreeNode<int>* front = pendingNode.front();
		pendingNode.pop();

		// Left Child
		int leftChildData;

		// cout<<"Enter left child of "<<front->data<<endl;
		cin>>leftChildData;

		if (leftChildData != -1) {
			BinaryTreeNode<int>* leftChild = new BinaryTreeNode<int>(leftChildData);
			front->left = leftChild;
			pendingNode.push(leftChild);
		}


		// Right Child
		int rightChildData;

		// cout<<"Enter left child of "<<front->data<<endl;
		cin>>rightChildData;

		if (rightChildData != -1) {
			BinaryTreeNode<int>* rightChild = new BinaryTreeNode<int>(rightChildData);
			front->right = rightChild;
			pendingNode.push(rightChild);
		}
	}

	return root;
}

void printTreeLevelWise(BinaryTreeNode<int>* root) {
	if (root==NULL) {
		return;
	}

	queue<BinaryTreeNode<int>*> pendingNode;
	pendingNode.push(root);

	while(!pendingNode.empty()) {
		BinaryTreeNode<int>* front = pendingNode.front();
		pendingNode.pop();

		if (front==NULL) {
			cout<<endl;

			if (!pendingNode.empty()) {
				pendingNode.push(NULL);
			}
		} else {
			cout<<front->data<<": ";

			if(front->left) {
				cout<<"L";
				cout<<front->left->data<<" ";
				pendingNode.push(front->left);
			} 

			if(front->right) {
				cout<<"R";
				cout<<front->right->data;
				pendingNode.push(front->right);
			} 
		}

		cout<<endl;
	}
}

int countNodes(BinaryTreeNode<int>* root) {
	if (root==NULL) {
		return 0;
	}

	return 1 + countNodes(root->left) + countNodes(root->right);
}

void inOrder(BinaryTreeNode<int> *root) {
    if (root==NULL) {
        return;
    }
    
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(BinaryTreeNode<int> *root) {
    if (root==NULL) {
        return;
    }
    
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(BinaryTreeNode<int> *root) {
    if (root==NULL) {
        return;
    }
    
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}


int main() 
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif

    /*
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
    BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);
    BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3);

    root->left = node1;
    root->right = node2;
    */


    // BinaryTreeNode<int>* root = takeTree();
    BinaryTreeNode<int>* root = takeTreeLevelWise();
    printTreeLevelWise(root);
    cout<<endl;

    cout<<"Total Nodes: "<<countNodes(root)<<endl;

    cout<<"In-Order"<<" - ";
    inOrder(root);

    cout<<"\nPre-Order"<<" - ";
    preOrder(root);

    cout<<"\nPost-Order"<<" - ";
    postOrder(root);

}