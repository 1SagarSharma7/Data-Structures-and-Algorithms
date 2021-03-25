/*

11-Palindrome-LinkedList

You have been given a head to a singly linked list of integers. Write a function check to whether the list given is
 a 'Palindrome' or not.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First and the only line of each test case or query contains the the elements of the singly linked list 
separated by a single space.

Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would 
never be a list element.

Output format :
For each test case, the only line of output that print 'true' if the list is Palindrome or 'false' otherwise.

Constraints :
1 <= t <= 10^2
0 <= M <= 10^5

Time Limit: 1sec

Where 'M' is the size of the singly linked list.

Sample Input 1 :
1
9 2 3 3 2 9 -1

Sample Output 1 :
true

Sample Input 2 :
2
0 2 3 2 5 -1
-1

Sample Output 2 :
false
true

Explanation for the Sample Input 2 :
For the first query, it is pretty intuitive that the the given list is not a palindrome, hence the output is 'false'.

For the second query, the list is empty. An empty list is always a palindrome , hence the output is 'true'.

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




Node* reverseLL(Node* head2){

// iterate and add 3 check list // 1st to enter the loop // last to enter the loop at mid

Node* temp1 = head2;
Node* temp2 = head2;
Node* temp3 = head2;

		
	// save the location of the next update
	temp3 = temp1 -> next;
	
	//save the location of the current update
	temp2 = temp1;
	
	// update it 
	
	temp1 -> next = NULL;
	
	temp1 = temp3;
		
while(temp1 -> next != NULL){
	
		// save the location of the next update
		temp3 = temp1 -> next;
		
		// location of the previous upadate
		temp1 -> next = temp2;
		
		//save the location of the current update
		temp2 = temp1;
		
		// update temp1
		temp1 = temp3;
	
}

temp1 -> next = temp2;
head2 = temp1;


//	Node* print =  head2;
//	
//		while(print != NULL){
//			
//			cout << print -> data << " ";
//			print = print -> next;
//			
//		}

return head2; 

}

// function

bool palindromeLL(Node* head){
	
	// find the length and then if its odd skip the mid element 
	int len = lengthLL(head);
	//len--;   // so that it can come in the form of an array
	int len1, len2;
	if(len % 2 == 0){
		len1 = len / 2;
		len2 = len1 + 1;
	}
	else{
		len1 = len / 2;
		len2 = len1 + 2;
	}
	
	len1--;
	len2--;
	Node* temp1 = head;
	while(len1--){
		temp1 = temp1 -> next;
	}
	
	Node* temp2 = head;
	while(len2--){
		temp2 = temp2 -> next;
	}
	Node* head2 = temp2;
	
	// at the division add the element to be the null // save the head of the second half and create a function for it to be
	// reversed
	
	Node* head1 = head;
	temp1 -> next = NULL;
	head2 = reverseLL(head2);
	
	// iterate and check // return accordingly
	
	while(head1 != NULL && head2 != NULL){
		if(head1 -> data != head2 -> data){
			return false;
		}
		head1 = head1 -> next;
		head2 = head2 -> next;
	}
	return true;
	
	
	
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
	
		if(palindromeLL(head)){
		cout << "True" << endl;
		}
		
		else{
			cout << "False" << endl;
		}
	
	}
	
	return 0;
	
}

