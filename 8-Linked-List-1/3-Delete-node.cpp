/*

3-Delete-node

You have been given a linked list of integers. Your task is to write a function that deletes a node from a given position, 'pos'.

Note :
Assume that the Indexing for the linked list always starts from 0.

If the position is greater than or equal to the length of the linked list, you should return the same linked list without any change.

Illustration :
The following images depict how the deletion has been performed.

Image-I :
Alt txt

Image-II :
Alt txt

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case or query contains the elements of the linked list separated by a single space. 

The second line of each test case contains the integer value of 'pos'. It denotes the position in the linked list from where the node has to be deleted.
 Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element

Output format :
For each test case/query, print the resulting linked list of integers in a row, separated by a single space.

Output for every test case will be printed in a separate line.
You don't need to print explicitly, it has been taken care of.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
pos >= 0

Time Limit: 1sec

Where 'N' is the size of the singly linked list.

Sample Input 1 :
1 
3 4 5 2 6 1 9 -1
3

Sample Output 1 :
3 4 5 6 1 9

Sample Input 2 :
2
3 4 5 2 6 1 9 -1
0
10 20 30 40 50 60 -1
7

Sample Output 2 :
4 5 2 6 1 9
10 20 30 40 50 60

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

Node* deleteNode(Node* head){
	
	// take i
	int i;
	cin >> i;
	
	// 2 pointer temp1 and temp2 one pointing the node which has to be deleted and the other its back
	
	Node* temp1 = head;
	Node* temp2 = head;
	Node* temp3 = head;
	
	// go till the node which has to be deleted
	
	//if i == 0
	if(i == 0){
		
		// temp3 = head;
		
		Node* temp3 = head;
		
		// head = head -> next;
		
		head = head -> next;
		
		// delete temp3;
		
		delete temp3;
		return head;
	}
	
	// if i == lengthLL(head)
	
	if(i == lengthLL(head)){
		
		// while till temp -> next -> next == NULL
		Node* temp = head;
		while(temp -> next -> next == NULL){
			
			temp = temp -> next;
			
		}
		
		// temp -> next -> next save it in temp3
		
		Node* temp3 = temp -> next -> next;
		
		// temp -> next = NULL
		
		temp -> next = NULL;
		
		// delete temp3;
		
		delete temp3;
		
		return head;
		
	}
	
	
	i--;		// it stops 1 back
	
	while(i--){
		temp1 = temp1 -> next;
	}
		temp2 = temp1 -> next;
	
	// connect temp1 -> next to temp -> next // save temp2 too to delete it
	
	temp1 -> next = temp2 -> next;
	temp3 = temp2;				// freing the memory occupied by node which has to be deleted 
	
	delete temp3;
	
	return head;
	
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
	
		Node* temp = deleteNode(head);
		
	// print the function
	
	while(temp != NULL){
		
		cout << temp -> data << " ";
		temp = temp -> next;
		
	}
	
	}
	
	return 0;
	
}

