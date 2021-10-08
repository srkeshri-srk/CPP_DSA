

//generic type Queue Using Array
//By: Shreyansh Raj Keshri

#define basicSize 5

template <typename T>
class QueueUsingArray
{
	private:
		
		T *data;
		int front;
		int rear;
		int size;
		int capacity;
	
	public:

		QueueUsingArray() {

			cout<<"Stack Using Array "<<typeid(T).name()<<" type. "<<endl;

			data = new T[basicSize];
			front = -1;
			rear = 0;
			size = 0;
			capacity = basicSize;
		}


		int getSize() {
			return size;
		}

		int getCapacity() {
			return capacity;
		}

		bool isEmpty() {
			return size==0;
		}

		void enqueue(T element) {

			if(size == capacity) {
				// cout<<"Queue Full"<<endl;

				T *newData = new T[2*capacity];
				int j = 0;

				for(int i = front; i<capacity; i++) {
					newData[j++] = data[i];
				}

				for (int i = 0; i < front; i++) {
					newData[j++] = data[i];
				}

				delete[] data;
				data = newData;

				front = 0;
				rear = capacity;	
				capacity *= 2;
	
			}
	
			data[rear] = element;
			rear = (rear+1) % capacity;
		
			if(front == -1) {
				front = 0;
			}
	
			size++;
		}
	
			
		T getFront() {
	
			if(isEmpty()) {
				cout<<"Queue is Empty"<<endl;
				return 0;
			}
	
			return data[front];
		}
	
		
		T dequeue() {
		
			if(isEmpty()) {
				cout<<"Queue is Empty"<<endl;
				return 0;
			}	
		
			T ans = data[front];
			front = (front+1) % capacity;
			size--;

			if(size == 0) {
				front = -1;
				rear = 0;
			}

			return ans;
		}

};
