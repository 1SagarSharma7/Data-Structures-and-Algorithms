#include <iostream>
using namespace std;

// define Node

class Node{
	
	public:
		int data;
		Node *next;
	
	Node(int data){
		this -> data = data;
		this -> next = NULL;
	}
	
};


// function

int printIthNode(Node* head){
	
	
	
}

// Taking input 
Node* takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);		// created dynamically 
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}


// driver code to call the length function

int main(){
	
	// test cases
	
	int t;
	cin >> t;
	while (t--)
	{
		
	// take input in the linked list till -1
	
		Node *head = takeinput();
		
	// call the function for calculating the length of the linked list
	
		cout << printIthNode(head) << endl;
	
	}
	
	return 0;
	
}

