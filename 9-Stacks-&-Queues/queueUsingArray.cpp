#include <iostream>
using namespace std;

/* implement queues // fifo */
template <typename T>
class queue{
	
	public:
		
	// data members
	T* data;
	int size;
	int capacity;
	int nextIndex;;
	
	// function members
	// constructor
	queue(){
		data = new T[4];
		capacity = 4;
		size = 0;
		nextIndex = 0;
	}
	
	// size
	int getSize(){
		return size;
	}
	
	
	// is empty
	bool isEmpty(){
		return getSize() == 0;
	}	
	
	//  push
	void push(T value){
		if(getSize() == capacity){
			T* newData = new T[capacity * 2];
			for(int i = 0; i < capacity * 2; i++){
				newData[i] = data[i];
			}
			T* deleteNewData = newData;
			data = newData;
			delete deleteNewData;
		}
		data[nextIndex] = value;
		nextIndex++;
		size++;
	}
	 
	// pop
	T pop(){
		if(size == 0){
			cout << "Queue is empty" << endl;
			return -1;
		}
		T temp = data[0];
		for(int i = 1; i < size; i++){
			data[i - 1] = data[i];
		}
		size--;
		nextIndex--;
		return temp;
	}
	
	// front
	T front(){
		if(size == 0){
			cout << "Queue Is Empty" << endl;
			return -1;
		}
		return data[0];
	}
	
	
};


	int main(){
		
		// create a queue
		queue<int> q1;
		
		// add 3 elements 
		q1.push(1);
		q1.push(2);
		q1.push(3);
		
		// perform front
		cout << q1.front() << "Front" << endl;
		
		// get size
		cout << q1.getSize() << "Size" << endl;
		
		// is empty
		cout << q1.isEmpty() << "Is Empty" << endl;
		
		// pop 2 of them
		cout << q1.pop() << "Pop" << endl;
		cout << q1.pop() << "Pop" << endl;
		cout << q1.pop() << "Pop" << endl;
		
		// addd 5 more
		q1.push(4);
		q1.push(5);
		q1.push(6);
		q1.push(7);
		q1.push(8);
		
		// print all
		
		cout << q1.pop() << endl;
		cout << q1.pop() << endl;
		cout << q1.pop() << endl;
		cout << q1.pop() << endl;
		cout << q1.pop() << endl;
		cout << q1.pop() << endl;
		cout << q1.pop() << endl;
	}
