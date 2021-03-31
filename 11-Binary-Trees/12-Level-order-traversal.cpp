/*

12-Level-order-traversal

For a given a Binary Tree of type integer, print it in a level order fashion where each level 
will be printed on a new line. Elements on every level will be printed in a linear fashion and 
a single space will separate them.

Example:
 						 10
                      /      \
                    20      30
                   /    \		\
                 40    50   	60

For the above-depicted tree, when printed in a level order fashion, the output would look like:

10
20 30 
40 50 60
Where each new line denotes the level in the tree.

Input Format:
The first and the only line of input will contain the node data, all separated by a single space. 
Since -1 is used as an indication whether the left or right node data exist for root, 
it will not be a part of the node data.

Output Format:
The given input tree will be printed in a level order fashion where each level will be printed on a new line. 
Elements on every level will be printed in a linear fashion. A single space will separate them.

Constraints:
1 <= N <= 10^5
Where N is the total number of nodes in the binary tree.

Time Limit: 1 sec

Sample Input 1:
10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1 

Sample Output 1:
10 
20 30 
40 50 60 

Sample Input 2:
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1

Sample Output 2:
8 
3 10 
1 6 14 
4 7 13 

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






// print the binary tree
// call the function
void printLevelWiseFashion(BinaryTreeNode<int>* root){
	
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	pendingNodes.push(NULL);
	
	while(!pendingNodes.empty()){
		BinaryTreeNode<int>* frontNode = pendingNodes.front();
		pendingNodes.pop();
		
		if(frontNode == NULL){
			cout << "\n";
			
			if(!pendingNodes.empty()){
				pendingNodes.push(NULL);
			}
	}else{
		cout << frontNode -> data << " ";
		
		if(frontNode -> left != NULL){
			pendingNodes.push(frontNode -> left);
		}
		
		if(frontNode -> right != NULL){
			pendingNodes.push(frontNode -> right);
		}
		
	}
		
	}
	
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
	printLevelWiseFashion(root);
	
}
