#include<iostream>
using namespace std;

#include "StackUsingArray.cpp"


int main() 
{
	StackUsingArray<float> s;
	s.push(10.3);
	s.push(20.4);
	s.push(30.2);
	s.push(40.3);
	s.push(50.7);

	s.printStack();


	cout << s.top() << endl;

	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;


	cout << s.size() << endl;

	cout << s.isEmpty() << endl;

	return 0;
}
