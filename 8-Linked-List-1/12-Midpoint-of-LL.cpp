/*

12-Midpoint-of-LL

For a given singly linked list of integers, find and return the node present at the middle of the list.

Note :
If the length of the singly linked list is even, then return the first middle node.

Example: Consider, 10 -> 20 -> 30 -> 40 is the given list, then the nodes present at the middle with respective data values are, 20 and 30. We return the first node with data 20.
 
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first and the only line of each test case or query contains the elements of the singly linked list separated by a single space. 

Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element

Output Format :
For each test case/query, print the data value of the node at the middle of the given list.

Output for every test case will be printed in a seperate line.

Constraints :
1 <= t <= 10^2
0 <= M <= 10^5 
Where M is the size of the singly linked list.


Time Limit: 1sec

Sample Input 1 :
1
1 2 3 4 5 -1

Sample Output 1 :
3

Sample Input 2 :
2 
-1
1 2 3 4 -1

Sample Output 2 :
2

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

Node* midpointLL(Node* head){
	
	// fast is goona go for 2 jumps and the slow is goona go for 1 jump // so when the fast stops its the mid for the slow
	
	// create fast and low 
	Node* fast = head;
	Node* slow = head;
	
	// while till fast -> next = NULL
	while(fast -> next -> next != NULL){
		
	// increament fast by two and slow by one
		fast = fast -> next -> next;
		slow = slow -> next;
		
	}
	
	// return the slow
	return slow;
	
	
	
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
	
		Node* print = midpointLL(head);
		cout << print -> data << endl;
	
	}
	
	return 0;
	
}

