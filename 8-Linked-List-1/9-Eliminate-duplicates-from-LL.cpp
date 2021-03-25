/*

9-Eliminate-duplicates-from-LL

You have been given a singly linked list of integers where the elements are sorted in ascending order. 
Write a function that removes the consecutive duplicate values such that the given list only contains unique 
elements and returns the head to the updated list.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first and the only line of each test case or query contains the elements(in ascending order) of the singly linked list separated by a single space.

Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element.

Output format :
For each test case/query, print the resulting singly linked list of integers in a row, separated by a single space.

Output for every test case will be printed in a seperate line.

Constraints :
1 <= t <= 10^2
0 <= M <= 10^5

Time Limit: 1sec

Where 'M' is the size of the singly linked list.

Sample Input 1 :
1
1 2 3 3 4 3 4 5 4 5 5 7 -1

Sample Output 1 :
1 2 3 4 3 4 5 4 5 7 

Sample Input 2 :
2
10 20 30 40 50 -1
10 10 10 10 -1

Sample Output 2 :
10 20 30 40 50
10

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

Node* deleteNode(Node* head,int i){
	
	// take i
//	int i;
//	cin >> i;
	
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


// function

Node* eleminateDuplicatesFromLL(Node* head){
	
	// create a temp and check for consecutive duplicates iterate till null
	
	Node* temp = head;
	int i = 0;
	while(temp -> next -> next != NULL){
		
	// if found any	delete that node and move on
		
		if(temp -> data == temp -> next -> data){
			
			temp  = temp -> next;
			deleteNode(head, i);
			continue;
		}
		i++;
		temp = temp -> next;
		
	}
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
	
		Node* print =  eleminateDuplicatesFromLL(head);
	
		while(print != NULL){
			
			cout << print -> data << " ";
			print = print -> next;
			
		}
	
	}
	
	return 0;
	
}

