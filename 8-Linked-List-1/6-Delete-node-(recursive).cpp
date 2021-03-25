/*

6-Delete-node-(recursive)

Given a singly linked list of integers and position 'i', delete the node present at the 'i-th' position in the linked list recursively.
Note :
Assume that the Indexing for the linked list always starts from 0.

No need to print the list, it has already been taken care. Only return the new head to the list.

input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case or query contains the elements of the singly linked list separated by a single space.

The second line of input contains a single integer depicting the value of 'i'.

Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element

Output format :
For each test case/query, print the elements of the updated singly linked list.

Output for every test case will be printed in a seperate line.

Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Where M is the size of the singly linked list.
0 <= i < M

Time Limit:  1sec

Sample Input 1 :
1
3 4 5 2 6 1 9 -1
3

Sample Output 1 :
3 4 5 6 1 9

Sample Input 2 :
2
30 -1
0
10 20 30 50 60 -1
4

Sample Output 2 :
10 20 30 50 

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



// function

Node* deleteNodeRecursively(Node* head, int index){
	
	// base case
	
	// middle
	
	if(index == 1){
		Node* temp2 = head -> next;
		Node* temp3  = temp2;
		Node* temp1 = head;
		
		temp1 -> next = temp2 -> next;
		delete temp3;
		return head;
		
	}
	
	
	//start
	
	if(index == 0){
		
		Node* temp2 = head -> next;
		Node* temp3 = head;
		head = temp2;
		delete temp3;
		return head;
	
	}
	
	// end
	
	if(index == lengthLL(head) - 1){
		
		Node* temp = head;
		while(temp -> next -> next != NULL){
			
			temp = temp -> next;
			
		}
		Node* temp2 = temp -> next;
		temp -> next = NULL; 
		Node* temp3 = temp2;
		delete temp3;
		return head;
		
		
	}
	
	
	
	return deleteNodeRecursively(head -> next, index - 1);
	
	
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
	
	// index
	int index;
	cin >> index;
	
		
	// call the function for calculating the length of the linked list
	
	
	
		
		Node* temp = deleteNodeRecursively(head, index);
		
		while(temp != NULL){
			
			cout << temp -> data << " ";
			temp = temp -> next;
			
		}
	
	}
	
	return 0;
	
}




