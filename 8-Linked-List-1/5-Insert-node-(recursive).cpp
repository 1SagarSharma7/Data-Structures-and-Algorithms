/*

5-Insert-node-(recursive)

You have been given a linked list of integers. Your task is to write a function that inserts a node at a given position, 'pos'.

Note:
Assume that the Indexing for the linked list always starts from 0.

If the given position 'pos' is greater than length of linked list, then you should return the same linked list without any change. And if position 'pos' is equal to length of input linked list, then insert the node at the last position.

Input format:
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case or query contains the elements of the linked list separated by a single space. 

The second line of each test case contains two space separated integers, that denote the value of 'pos' and the data to be inserted respectively. 

Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element

Output format:
For each test case/query, print the resulting linked list of integers in a row, separated by a single space.

Output for every test case will be printed in a separate line.
You don't need to print explicitly, it has been taken care of.

Constraints:
1 <= t <= 20
0 <= length of linked list <= 10^4
0 <= pos, data to be inserted <= 2^31 - 1

Time Limit: 1 second

Sample Input 1:
1
3 4 5 2 6 1 9 -1
3 100

Sample Output 1:
3 4 5 100 2 6 1 9

Sample Input 2:
1 
3 4 5 2 6 1 9 -1
0 20

Sample Output 2:
20 3 4 5 2 6 1 9

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


// finding the length
int lengthLL(Node* head){
	
	// create a count and start it by zero
	
	int count = 0;
	
	// loop till temp != NUll and increment the count // return the count 
	
	Node* temp = head;
	while(temp != NULL){
		
		count++;
		temp = temp -> next;
		
	}
	
	return count;
	
}

Node* insertNodeRecursively(Node* head, Node* temp1, int index, int actualIndex, int data){
	
	// in middle
	if(index == 0){
		
		Node* newNode = new Node(data);
		Node* temp2 = temp1 -> next;
		
		newNode -> next = temp2;
		temp1 -> next = newNode;
		return head;	
	}
	
	// head
	if(actualIndex == 0){
		
		Node* newNode = new Node(data);
		newNode -> next = head;
		head = newNode;
		return head;
	}
	
	// tail
	if(actualIndex == lengthLL(head) - 1){
		
		Node* newNode = new Node(data);
		Node* temp = head;
		while(temp -> next != NULL){
			temp = temp -> next;
		}
			temp -> next = newNode;
			newNode -> next = NULL;
			return head;
	}
	
	
	return insertNodeRecursively(head, temp1 -> next, index - 1, index, data);
	
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
		
	// take the index and the data
	
	int i, data;
	cin >> i >> data;
	
		
	Node* temp = insertNodeRecursively(head, head, i - 1, i, data);
		
	// print the linked list 
	
		while( temp != NULL){
			cout << temp -> data << " ";
			temp = temp -> next;
		}
	
	}
	
	return 0;
	
}

