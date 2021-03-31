
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
	//function();
	
}









