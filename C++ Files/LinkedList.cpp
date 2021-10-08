#include <iostream>
using namespace std;
#include "struct.cpp"


int main() {
	// Statically
	Node n1;

	n1.data = 3;
	Node *head = &n1;

	//Node n2(2);

	//n1.next = &n2;

	cout << n1.data << endl;


}

