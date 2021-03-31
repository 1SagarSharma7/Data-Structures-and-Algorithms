/*

11-Check-Balanced

Given a binary tree, check if it is balanced. Return true if given binary tree is balanced, false otherwise.

Balanced Binary Tree:
A empty binary tree or binary tree with zero nodes is always balanced. For a non empty binary tree to be balanced, following conditions must be met:
1. The left and right subtrees must be balanced.
2. |hL - hR| <= 1, where hL is the height or depth of left subtree and hR is the height or depth of right subtree.    

Input format:
The first line of input contains data of the nodes of the tree in level order form. The data of the nodes of the tree is separated by space. If any node does not have a left or right child, take -1 in its place. Since -1 is used as an indication whether the left or right nodes exist, therefore, it will not be a part of the data of any node.

Output format
The first and only line of output contains true or false.

Constraints
Time Limit: 1 second

Sample Input 1 :
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1

Sample Output 1 :
false

Sample Input 2 :
1 2 3 -1 -1 -1 -1

Sample Output 2 :
true

*/

/* inorder for the complete tree to be balanced .. it should be balanced for the entire part*/

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

pair<int, int> isBalancedHelper(BinaryTreeNode<int> *root){
	// base case
	if(root == NULL){
		pair<int, bool> p;
		p.first = 0;
		p.second = true;
		return p;
	}
	
	// recur case
	pair<int, int> ans;
	pair<int, int> leftSide = isBalancedHelper(root -> left);
	pair<int, int> rightSide = isBalancedHelper(root -> right);
	
	// scal case
	int diff = leftSide.first - rightSide.first;
	if(diff < 0){
		diff = diff * -1;
	}
	if(diff <= 1){
		ans.first = 1 + max(leftSide.first , rightSide.first);
		ans.second = leftSide.second && rightSide.second && true;
	}
	else{
		ans.first = 1 + max(leftSide.first , rightSide.first);
		ans.second = leftSide.second && rightSide.second && false;
	}
	return ans;
}


// call the function
bool isBalanced(BinaryTreeNode<int> *root){
	pair<int, int> p = isBalancedHelper(root);
	return p.second;
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
	
	
	// function
bool print = isBalanced(root);

	if(print){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
	
}

