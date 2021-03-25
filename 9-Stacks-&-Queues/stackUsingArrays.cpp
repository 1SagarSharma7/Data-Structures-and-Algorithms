#include <iostream>
using namespace std;
template <typename T>
class stack{
	
	public:
		/* create a adt of filo // we can access 1 element at a time top// must follow the principals of push and pop*/
		
		// create data members
		T* data;
		int nextIndex;
		int capacity;
		
		// constructor
		stack(){
			data = new T[4];
			capacity = 4;
			nextIndex = 0;
			capacity = 4;
		}
		
		// get size
		int getSize(){
			return nextIndex;
		}
		
		// push 
		void push(T value){
			if(getSize() == capacity){
				T* newData = new T[capacity * 2];
				for(int i = 0; i < capacity; i++){
					newData[i] = data[i];
				}
				T* deleteData = data;
				data = newData;
				delete newData;
			}
			data[nextIndex++] = value;
		}
		
		// pop 
		T pop(){
			if(getSize() == 0){
				cout << "No Elements To pop" << endl;
			}
			nextIndex--;
			return data[nextIndex];
			
		}
		
		// top
		T top(){
			// give the most recent element which has been push
			if(getSize() == 0){
				cout << "Stack is empty" << endl;
			}
			 return data[nextIndex - 1];
		}
		
		
		// is empty
		bool isEmpty(){
			return getSize() != 0;
		}
};


int main(){
	
	stack<int> s1;
	//cout << "Stack should be empty" << isEmpty();
	
	//cout << "capacity : " <<  
	
	s1.push(1);
	s1.push(2);
	s1.push(3);
	
	cout << "top : " << s1.top() << endl;
	
	cout << "pop : " << s1.pop() << endl;
	
	cout << "top : " << s1.top() << endl;
	
	s1.push(5);
	
	cout << "top : " << s1.top() << endl;
	
	

	
}
