
//generic type Stack
//By: Shreyansh Raj Keshri


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
class StackUsingLinkedList
{
	private:
		
		int totalSize;
		Node<T> *head;

	public:
		StackUsingLinkedList() {

			cout<<"Stack Using Linked List "<<typeid(T).name()<<" type. "<<endl;

			head = NULL;
			totalSize = 0;
		}

		int size() {
        	return totalSize;
    	}
    
    	bool isEmpty() {
        	return head==NULL;
    	}
    
    	void push(T element) {
        
        	Node<T> *newNode = new Node<T>(element);
        
        	if(isEmpty()) {
            	head = newNode;
        	}
        	else {
            	newNode->next = head;
            	head = newNode;
        	}
        
        	totalSize++;
    	}
    
    	T pop() {
        	// Return 0 if stack is empty. Don't display any other message
        
        	if(isEmpty()) {
            	return 0;
        	}
        
        	Node<T> *temp = head;
        	T ans = head->data;
        
        	temp = head;
        	head = head->next;
        
        	delete temp;
        	totalSize--;
        	return ans;
        
    	}
    
    	T top() {
        	// Return 0 if stack is empty. Don't display any other message
        
        	if(isEmpty()) {
            	return 0;
        	}
        
        	return head->data;
    	}


    	//Print all stack from top to bottom.
		void printStack() {

			Node<T> *temp = head;

			cout<<"|";
			while(temp!=NULL)
			{
				cout<<temp->data<<"|";
				temp = temp->next;
			}

			cout<<endl;
		}
    
  
	
};