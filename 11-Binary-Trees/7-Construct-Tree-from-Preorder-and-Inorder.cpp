/*

7-Construct-Tree-from-Preorder-and-Inorder

For a given preorder and inorder traversal of a Binary Tree of type integer stored in an array/list,
create the binary tree using the given two arrays/lists. 
You just need to construct the tree and return the root.

Note:
Assume that the Binary Tree contains only unique elements. 

Input Format:
The first line of input contains an integer N denoting the size of the list/array. It can also be said that N is the total number of nodes the binary tree would have.

The second line of input contains N integers, all separated by a single space. It represents the preorder-traversal of the binary tree.

The third line of input contains N integers, all separated by a single space. It represents the inorder-traversal of the binary tree.

Output Format:
The given input tree will be printed in a level order fashion where each level will be printed on a new line. 
Elements on every level will be printed in a linear fashion. A single space will separate them.

Constraints:
1 <= N <= 10^4
Where N is the total number of nodes in the binary tree.

Time Limit: 1 sec

Sample Input 1:
7
1 2 4 5 3 6 7 
4 2 5 1 6 3 7 

Sample Output 1:
1 
2 3 
4 5 6 7 

Sample Input 2:
6
5 6 2 3 9 10 
2 6 3 9 5 10 

Sample Output 2:
5 
6 10 
2 3 
9 

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

BinaryTreeNode<int>* buildTreeHelper(int* pre,int* in,int ps,int pe,int is,int ie)
{	
	// base case
    if(is > ie || ps > pe)
    {
        return NULL;
    }
	
	
	// scal case
    int rootData = pre[ps];
    int rootIndex = -1;

    for(int i = is; i <= ie; i++)
    {
        if(in[i] == rootData)
        {
            rootIndex = i;
            break;
        }
    }

    int lis = is;
    int lie = rootIndex - 1;
    int lps = ps + 1;
    int lpe = lie - lis + lps;


    int ris = rootIndex + 1;
    int rie = ie;
    int rps = lpe + 1;
    int rpe = pe;

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
	
	// recur case
    root -> left = buildTreeHelper(pre, in, lps, lpe, lis, lie);
    root -> right = buildTreeHelper(pre, in, rps, rpe, ris, rie);
    
    return root;

}
	// call the function

BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) 
{
    return buildTreeHelper(preorder,inorder, 0,preLength - 1, 0,inLength - 1); 
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
	int size;
	cin >> size;
	
	int* pre = new int[size];
	int* in = new int[size];
	// create a binary tree // take input level wise of a binary tree 
	
	for(int i = 0; i < size; i++) cin >> pre[i];
	for(int i = 0; i < size; i++) cin >> in[i];
	
	BinaryTreeNode<int>* root = buildTree(pre, size, in, size);
	
	printLevelWise(root);
	
}
