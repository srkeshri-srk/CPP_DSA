#include<stdc++.h>
using namespace std;

#include "Node.cpp"

Node* inputNode() {

	int data, i = 1;

	cout<<"Enter element "<<i<<" : ";
	cin>>data;

	Node *head = NULL;
	Node *tail = NULL;

	while(data != -1) {

		Node *newNode = new Node(data);

		if(head == NULL) {
			head = newNode;
			tail = newNode;
		}

		else {
			tail->next = newNode;
			tail = tail->next;
		}

		cout<<"Enter element "<<++i<<" : ";
		cin>>data;

	}

	return head;
}

void printNode(Node *head) {

	Node *temp = head;

	while(temp!=NULL) {
		cout<<temp->data;
		temp = temp->next;

		if(temp!=NULL)
			cout<<" -> ";
	}
	cout<<endl;
	return;
}

Node *insertNodeAtGivenPosion(Node *head, int data, int position)
{
	Node *temp = head;
	int i = 0;

	Node *newNode = new Node(data);

	if(position == 0) {
		newNode->next = head;
		head = newNode;
		return head;
	}

	while(temp!=NULL && i<position-1) {

		temp = temp->next;
		i++;
	}

	if(temp != NULL) {

		newNode->next = temp->next;
		temp->next = newNode;
		return head;	
	}

	cout<<"Position Not Found"<<endl;
	return head;
}

Node *deleteNodeAtGivenPosition(Node *head, int position) 
{
	int i = 0;
	Node *temp = head;
	Node *a = new Node;

	if (position == 0)
	{
		a = head->next;
		cout<<a->data<<endl;
		head = head->next;

		delete a;
		return head;
	}

	while(temp!=NULL && i<position-1) {

		temp = temp->next;
		i++;
	}

	if(temp==NULL || temp->next==NULL) {

		return head;
	}

	a = temp->next;
	temp->next = a->next;

	cout<<a->data<<endl;	
	delete a;

	return head;
}

int main()
{


	Node *head = inputNode();
	printNode(head);


	cout<<"round 2"<<endl;

	int pos, data;
	cout<<"Enter Data and position : ";
	cin>>data>>pos;

	head = insertNodeAtGivenPosion(head, data, pos);
	printNode(head);

	cout<<"round 3"<<endl;
	cin>>pos;
	head = deleteNodeAtGivenPosition(head, pos);
	printNode(head);


	// Node n(5);
	// Node n2(10);
	// Node n3(15);
	// Node n4(20);
	// Node n5(25);

	// Node *head = &n;


	// n.next = &n2;
	// n2.next = &n3;
	// n3.next = &n4;
	// n4.next = &n5;
	

	
	return 0;
}