/*

3-Max-data-node

Given a generic tree, find and return the node with maximum data. You need to return the node which is having maximum data.
Return null if tree is empty.

Input format :
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.

Output Format :
The first and only line of output contains the data of the node with largest data in the given tree.

Constraints:
Time Limit: 1 sec

Sample Input 1:
10 3 20 30 40 2 40 50 0 0 0 0 

Sample Output 1:
50

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

// function 
int maxDataNode(TreeNode<int>* root){
	
	//edge case
	if(root == NULL){
		return -1;
	}
	
	int max = root -> data;
	
	// base case
	for(int i = 0; i < root -> children.size(); i++){
	// recur case
		if(max < maxDataNode(root -> children[i])){
	// scall case
			max = maxDataNode(root -> children[i]);
		}
	}
	return max;
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
	int max = maxDataNode(root);
	cout << max << endl;
}
