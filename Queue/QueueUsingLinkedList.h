

template <typename T>
class Node {

	public:
		T data;
		Node<T> *next;

		Node(T data) {

			this->data = data;
			next = NULL;
		}
};


template <typename T>
class QueueUsingLinkedList {

private:
	Node<T> *front;
	Node<T> *rear;
	int size;

public:

	QueueUsingLinkedList() {

		cout<<"Stack Using Linked List "<<typeid(T).name()<<" type. "<<endl;

		front = NULL;
		rear = NULL;
		size = 0;
	}

	int getSize() {
		return size;
	}

	bool isEmpty() {
		return front == NULL;
	}


	void enqueue(T element) {

		Node<T> *newData = new Node<T>(element);

		if(front==NULL) {
			front = newData;
			rear = newData;
		}

		else {
			rear->next = newData;
			rear = newData;
		}
		
		size++;
	}
	
			
	T getFront() {
	
		if(front == NULL) {
			cout<<"Queue is Empty";
			return 0;
		}

		return front->data;
			
	}
	
		
	T dequeue() {
		
		if(front == NULL) {
			cout<<"Queue is Empty";
			return 0;
		}

		Node<T> *temp = front;
		front = front->next;

		T ans = temp->data;
		delete temp;

		size--;
		return ans;	
	}

};