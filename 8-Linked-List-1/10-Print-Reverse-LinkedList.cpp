/*

10-Print-Reverse-LinkedList

You have been given a singly linked list of integers. Write a function to print the list in a reverse order.
To explain it further, you need to start printing the data from the tail and move towards the head of the list,
 printing the head data at the end.

Note :
You can�t change any of the pointers in the linked list, just print it in the reverse order.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first and the only line of each test case or query contains the elements of the singly linked list separated by a single 
space.

Remember/Constraints :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a
 list element.

Output format :
For each test case, print the singly linked list of integers in a reverse fashion, in a row, separated by a single space.

Output for every test case will be printed in a seperate line.

Constraints :
1 <= t <= 10^2
0 <= M <= 10^3

Time Limit: 1sec

Where 'M' is the size of the singly linked list.

Sample Input 1 :
1
1 2 3 4 5 -1

Sample Output 1 :
5 4 3 2 1

Sample Input 2 :
2
1 2 3 -1
10 20 30 40 50 -1

Sample Output 2 :
3 2 1
50 40 30 20 10

*/

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

void printReverseLL(Node* head){
	
	if(head -> next == NULL){
		cout << head -> data << " ";
		return;
	}
	
	
	printReverseLL(head -> next);
	
	cout << head -> data << " ";;
	return;
	
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
	
		printReverseLL(head);
//	
//		while(print != NULL){
//			
//			cout << print -> data << " ";
//			print = print -> next;
//			
//		}
	
	
	
	}
	
	return 0;
	
}


