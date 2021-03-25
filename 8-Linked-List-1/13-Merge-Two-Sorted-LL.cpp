/*

13-Merge-Two-Sorted-LL

You have been given two sorted(in ascending order) singly linked lists of integers.
Write a function to merge them in such a way that the resulting singly linked list is also sorted(in ascending order) and return the new head to the list.

Note :
Try solving this in O(1) auxiliary space.

No need to print the list, it has already been taken care.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case or query contains the elements of the first sorted singly linked list separated by a single space. 

The second line of the input contains the elements of the second sorted singly linked list separated by a single space. 

Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element

Output :
For each test case/query, print the resulting sorted singly linked list, separated by a single space.

Output for every test case will be printed in a seperate line.

Constraints :
1 <= t = 10^2
0 <= N <= 10 ^ 4
0 <= M <= 10 ^ 4
Where N and M denote the sizes of the singly linked lists. 

Time Limit: 1sec

Sample Input 1 :
1
2 5 8 12 -1
3 6 9 -1

Sample Output 1 :
2 3 5 6 8 9 12 

Sample Input 2 :
2
2 5 8 12 -1
3 6 9 -1
10 40 60 60 80 -1
10 20 30 40 50 60 90 100 -1

Sample Output 2 :
2 3 5 6 8 9 12 
10 10 20 30 40 40 50 60 60 60 80 90 100

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

Node* mergeTwoSortedLL(Node *head1, Node *head2) 
{
	/* in a way stiching is goona be performed // restiching a whole new ll from the 2 sorted linked list */
	
	
    Node *fhead;
    Node *ftail;
    
    // decided the final head
    if(head1 -> data <= head2 -> data){
        fhead = head1;
        ftail = head1;
        head1 = head1 -> next;
    }
    else{
        fhead = head2;
        ftail = head2;
        head2 = head2 -> next;
    }
    
    // switched the middle - until one gets exhaust
    while(head1 && head2){	// null 1 of them gets null
        if(head1 -> data <= head2 -> data){
            ftail -> next = head1;
            head1 = head1 -> next;
            ftail = ftail -> next;
        }
        else{
            ftail -> next = head2;
            head2 = head2 -> next;
            ftail = ftail -> next;
        }
    }
    
    // switching the rest
	if(head1 == NULL)
    {
     	ftail -> next = head2;   
    }
    else
    {
        ftail -> next = head1;
    }
    return fhead;
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
	
		Node *head1 = takeinput();
		Node* head2 = takeinput();
		
	// call the function for calculating the length of the linked list
	
		Node* print = mergeTwoSortedLL(head1, head2);
		
		while(print != NULL){
			
		cout << print -> data << " ";
		print = print -> next;
			
		}
	
	}
	
	return 0;
	
}

