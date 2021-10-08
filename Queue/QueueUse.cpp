#include <iostream>
using namespace std;

#include "QueueUsingArray.h"
#include "QueueUsingLinkedList.h"

#include <queue>


/*
	Build-in queue:

	1. push()  --> Not return just Insert T type value to queue.
	2. pop()   --> Not return just Delete T type value from queue.
	3. front() --> return front value of queue in T.
	4. back()  --> return rear value of queue in T.
	5. size()  --> return size of queue in Int.
	6. empty() --> return true if queue is empty and false for non empty
*/

//#define Queue QueueUsingArray						//We can switch array to linkedlist queue. 
//#define Queue QueueUsingLinkedList				//just comment the other line.



int main()
{
	queue<int> q;


	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(60);

	queue<int> temp;

	// temp.swap(q);


	// cout<<"temp: "<<temp.front()<<endl;
	// cout<<temp.back()<<endl;

	// cout<<temp.size()<<endl;
	// cout<<temp.empty()<<endl;

	cout<<q.front()<<endl;
	cout<<q.back()<<endl;

	cout<<q.size()<<endl;
	cout<<q.empty()<<endl;


	q.pop();
	q.pop();
	q.pop();
	q.pop();
	cout<<q.front()<<endl;


	// Queue<int> q;

	// q.enqueue(10);
	// q.enqueue(20);
	// q.enqueue(30);
	// q.enqueue(40);
	// q.enqueue(50);
	// q.enqueue(60);


	// cout<<q.getFront()<<endl;

	// cout<<q.dequeue()<<endl;
	// cout<<q.dequeue()<<endl;
	// cout<<q.dequeue()<<endl;

	// cout<<q.getSize()<<endl;
	// cout<<q.isEmpty()<<endl;

	//cout<<q.getCapacity()<<endl;


	
	return 0;
}