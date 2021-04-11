/*

1-Search-in-BST

Given a BST and an integer k. Find if the integer k is present in given BST or not. You have to return true, if node with data k is present, return false otherwise.
Note: Assume that BST contains all unique elements.

Input Format:
The first line of input contains data of the nodes of the tree in level order form. The data of the nodes of the tree is separated by space. 
If any node does not have left or right child, take -1 in its place. Since -1 is used as an indication whether the left or right nodes exist, therefore, 
it will not be a part of the data of any node.   
The following line of input contains an integer, that denotes the value of k.

Output Format:
The first and only line of output contains a boolean value. 
Print true, if node with data k is present, print false otherwise. 

Constraints:
Time Limit: 1 second

Sample Input 1 :
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
2

Sample Output 1 :
true

Sample Input 2 :
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
12

Sample Output 2 :
false

*/


#include <iostream>
#include <queue>
using namespace std;

// create binary tree class
template <typename T>
class BinaryTreeNode{
	
	public:
	T data;
	BinaryTreeNode<T>* left;
	BinaryTreeNode<T>* right;
	
	BinaryTreeNode(T data){
		this -> data = data;
		this -> left = NULL;
		this -> right = NULL;
	}
	
	~BinaryTreeNode(){
		delete left;
		delete right;
	}
	
};




// call the function
bool searchInBST(BinaryTreeNode<int> *root , int k) {
	// base case
	if(root == NULL){
		return false;
	}
	
	
	// scal case
	if(root -> data == k){
		return true;
	}
	
	// recur case
	else if(root -> data > k){
		return searchInBST(root -> left, k);	// true or false // match milla to true return hoga
	}
	
	else{
		return searchInBST(root -> right, k); 	// varna end me jake false return hoga null ke karan
	}
	
}


// print the binary tree
void printLevelWise(BinaryTreeNode<int>* root){
	
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	
	// front 
	BinaryTreeNode<int>* front = pendingNodes.front();
	
	// pop
	pendingNodes.pop();
	
	// checking for null
	if(front -> left != NULL && front -> right != NULL){
		// print
		cout << front -> data << ":" << "L:" << front -> left -> data << "," << "R:" << front -> right -> data << endl;
		// call left push
		pendingNodes.push(front -> left);
		// call right push
		pendingNodes.push(front -> right);
	
	}
	else if(front -> left == NULL && front -> right != NULL){
		// print
		cout << front -> data << ":" << "L:" << "-1" << "," << "R:" << front -> right -> data << endl;
		// call right push
		pendingNodes.push(front -> right);
	}
	else if(front -> left != NULL && front -> right == NULL){
		cout << front -> data << ":" << "L:" << front -> left -> data << "," << "R:" << "-1" << endl;
			// call left push
		pendingNodes.push(front -> left);
	}
	else if(front -> left == NULL && front -> right == NULL){
		cout << front -> data << ":" << "L:" << "-1" << "," << "R:" << "-1" << endl;
	}
	
	
	// loop the entire binary tree
	while(pendingNodes.size() != 0){
	
		// repeat till empty
		
		// front 
		BinaryTreeNode<int>* front = pendingNodes.front();
		
		// pop
	pendingNodes.pop();
		
		// checking for null
	if(front -> left != NULL && front -> right != NULL){
		// print
		cout << front -> data << ":" << "L:" << front -> left -> data << "," << "R:" << front -> right -> data << endl;
		// call left push
		pendingNodes.push(front -> left);
		// call right push
		pendingNodes.push(front -> right);
	
	}
	else if(front -> left == NULL && front -> right != NULL){
		// print
		cout << front -> data << ":" << "L:" << "-1" << "," << "R:" << front -> right -> data << endl;
		// call right push
		pendingNodes.push(front -> right);
	}
	else if(front -> left != NULL && front -> right == NULL){
		cout << front -> data << ":" << "L:" << front -> left -> data << "," << "R:" << "-1" << endl;
			// call left push
		pendingNodes.push(front -> left);
	}
	else if(front -> left == NULL && front -> right == NULL){
		cout << front -> data << ":" << "L:" << "-1" << "," << "R:" << "-1" << endl;
	}
		
			
	}
	// 1 2 3 4 -1 -1 5 -1 -1 -1 -1
}

// take input level wise
BinaryTreeNode<int>* takeInputLevelWise(){
	// taking  and creating root data;
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	if(rootData == -1){
		return NULL;
	}
	
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
	
	// creating a queue
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	
	// loop till queue is empty
	while(pendingNodes.size() != 0){
		// take left and right of the root node and add in the queue accordingly
		
		BinaryTreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		
		cout << "Enter the left child of " << front -> data << endl;
		int leftChildData;
		cin >> leftChildData;
		if(leftChildData != -1){
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
			front -> left = child;
			pendingNodes.push(child);
		}
			
		cout << "Enter the right child of " << front -> data << endl;
		int rightChildData;
		cin >> rightChildData;
		if(rightChildData != -1){
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
			front -> right = child;
			pendingNodes.push(child);
		}
	}
	
	//	 return root
	return root;

}

// int main and call the function 
int main(){
	
	// create a binary tree // take input level wise of a binary tree 
	BinaryTreeNode<int>* root = takeInputLevelWise();
	
	int k;
	cin >> k;
	
	// function
	bool print = searchInBST(root , k);
	if(print){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
	
}
