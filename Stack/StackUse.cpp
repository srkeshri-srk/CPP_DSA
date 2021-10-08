#include<iostream>
using namespace std;

#include "StackUsingLinkedList.h"
#include "StackUsingArray.h"

#include <stack>

/*
	Build-in stack:

	1. push()  --> Not return just Insert T type value to stack.
	2. pop()   --> Not return just Delete T type value from stack.
	3. top()   --> return top value of stack in T.
	4. size()  --> return size of stack in Int.
	5. empty() --> return true if stack is empty and false for non empty
*/


//#define Stack StackUsingLinkedList				//We can switch array to linkedlist stack 
//#define Stack StackUsingArray						//just comment the other line.				


int main() 
{
	//Stack<float> s;
	stack<float> s;


	s.push(10.3);
	s.push(20.4);
	s.push(30.2);
	s.push(40.3);
	s.push(50.7);

	//s.printStack();


	cout << s.top() << endl;

	s.pop();
	s.pop();

	cout << s.top() << endl;


	// cout << s.pop() << endl;
	// cout << s.pop() << endl;
	// cout << s.pop() << endl;
	// cout << s.pop() << endl;
	// cout << s.pop() << endl;


	cout << s.size() << endl;

	//cout << s.isEmpty() << endl;
	cout << s.empty() << endl;


	return 0;
}
