/*
4-Find-height

Given a generic tree, find and return the height of given tree.

Input Format:
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.  

Output Format :
The first and only line of output prints the height of the given generic tree.

Constraints:
Time Limit: 1 sec

Sample Input 1:
10 3 20 30 40 2 40 50 0 0 0 0 

Sample Output 1:
3

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
int heightFunction(TreeNode<int>* root){
	//edge case
	if(root == NULL){
		return -1;
	}
	// base case
	// recur case
	// scall case
	int height = 0;
	for(int i = 0; i < root -> children.size(); i++){ // har ek recur ke start me initialize to jarur ho raha hai 0 se pur// vo update bhi ho raha hai
		int maxHeight = heightFunction(root -> children[i]);
		if(height < maxHeight){		// i have no idea how height is something other than that of 0 ( its getting updated)
			height =  maxHeight;	// samazh gaya uske traversal ke line se value return hone ke badh height update ho jayegi
		}
	}
	return height + 1;		// traversal line
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
	int height = heightFunction(root);
	cout << height << endl;
}
