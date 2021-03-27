/*

2-Find-sum-of-nodes

Given a generic tree, find and return the sum of all nodes present in the given tree.

Input format :
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node,
number of children to root node, data of each of child nodes and so on and so forth for each node.
The data of the nodes of the tree is separated by space.   

Output Format :
The first and only line of output prints the sum of all nodes of the given generic tree.

Constraints:
Time Limit: 1 sec

Sample Input 1:
10 3 20 30 40 2 40 50 0 0 0 0 

Sample Output 1:
190

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
int sumOfNodes(TreeNode<int>* root){
	// edge case
	// base case
	// recur case
	// scal case
	
	int ans = root -> data;
	for(int i = 0; i < root -> children.size(); i++){ // here 0 is itself acting as a base case
		ans = ans + sumOfNodes(root -> children[i]);
	}
	
	return ans;
	
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
	
	// call the addition function// catch the return in a variable and then print it 
	int print = sumOfNodes(root);
	cout << print << endl;
}
