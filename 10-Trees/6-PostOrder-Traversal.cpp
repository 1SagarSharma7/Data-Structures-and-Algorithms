/*

6-PostOrder-Traversal

Given a generic tree, print the post-order traversal of given tree.
The post-order traversal is: visit child nodes first and then root node.

Input format:
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.

Output Format :
The first and only line of output contains the elements printed in post-order traversal. The elements in the output must be separated by a single space.

Constraints:
Time Limit: 1 sec

Sample Input 1:
10 3 20 30 40 2 400 50 0 0 0 0 

Sample Output 1:
400 50 20 30 40 10

*/


#include <iostream>
using namespace std;

// define TreeNode class
#include <iostream>
#include <queue>
using namespace std;
template <typename T>
class TreeNode{
	
	public:
	T data;
	vector<TreeNode<T>*> children;
	TreeNode(T data){
		this -> data = data;
	}
};

/*
1 3 2 3 4 0 0 0
*/

// function 
void postOrderTraversal(TreeNode<int>* root){
	//edge case
	if(root == NULL){
		return;
	}
	// base case
	// scall case
	// recur case
	for(int i = 0; i < root -> children.size(); i++){
		postOrderTraversal(root -> children[i]);
	}
		cout << root -> data << " " << endl;
	
}

// define takeIntegerInput level wuse
TreeNode<int>* takeIntegerInputLevelWise(){
	int data;
	cin >> data;
	TreeNode<int>* root = new TreeNode<int>(data);
	queue<TreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	
	while(pendingNodes.size() != 0){
		TreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		
		int noOfChildrens;
		cin >> noOfChildrens;
		
		for(int i = 0; i < noOfChildrens; i++){
			
			int childData;
			cin >> childData;
			
			TreeNode<int>* child = new TreeNode<int>(childData);
			front->children.push_back(child);
			
			pendingNodes.push(child);
		}
	}
	return root;	
}

int main(){
	// take input and store it in a treenode named root
	TreeNode<int>* root = takeIntegerInputLevelWise();
	
	// call the function// catch the return in a variable and then print it 
	postOrderTraversal(root);
}
