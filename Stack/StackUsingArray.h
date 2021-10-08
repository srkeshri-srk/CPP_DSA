
//generic type Stack
//By: Shreyansh Raj Keshri


template <typename T>
#define basicSize 5

class StackUsingArray
{
	private:
		
		T *data;
		int totalSize;
		int nextIndex;

	public:

		StackUsingArray() {
			
			cout<<"Stack Using Array of "<<typeid(T).name()<<" type. "<<endl;

			data = new T[basicSize];
			nextIndex = 0; 
			this->totalSize = basicSize;
		}


		//This is return the current size Of Stack.
		int size() {

			return nextIndex;
		}


		//This is return true of false based on stack is non empty or empty.
		bool isEmpty() {

			return nextIndex==0;
		}


		//This will insert new element to Stack.
		void push(T element) {

			if(nextIndex == totalSize) {
				
				/*
					Create new data array with double size of total
					and copy all data element on that also delete old data
				 	and point data to new data
				*/

				T *newData = new T[2*totalSize];

				for(int i=0; i<totalSize; i++)
				{
					newData[i] = data[i];
				}

				totalSize *= 2;
				delete[] data;
				data = newData;

			}

			data[nextIndex] = element;
			nextIndex++;
		}


		//This is delete a top most element in the stack and return the value of element.
		T pop() {

			if(isEmpty()) {
				cout<<"Stack UnderFlow"<<endl;
				return 0;
			}

			nextIndex--;
			return data[nextIndex];
		}
		

		//This is only return the top most element value.
		T top() {

			if(isEmpty()) {
				cout<<"Stack UnderFlow"<<endl;
				return 0;
			}

			return data[nextIndex-1];

		}

		//Print all stack from top to bottom.
		void printStack() {

			cout<<"|";
			for (int i = nextIndex-1; i >= 0; i--)
			{
				cout<<data[i]<<"|";
			}

			cout<<endl;
		}


	
};