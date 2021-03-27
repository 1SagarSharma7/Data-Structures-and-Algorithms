/*

8-Node-with-maximum-child-sum

Given a generic tree, find and return the node for which sum of its data and data of all its child nodes is maximum. 
In the sum, data of the node and data of its immediate child nodes has to be taken.

Input format :
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space. 

Output format :
The first and only line of output contains the data of the node with maximum sum, as described in the task.

Constraints:
Time Limit: 1 sec

Sample Input 1 :
5 3 1 2 3 1 15 2 4 5 1 6 0 0 0 0

Sample Output 1 :
1

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

// my case

/*
5 3 1 2 3 1 15 2 4 5 1 6 0 0 0 0
*/

#include <climits>

template <typename T>
class MaxNodePair {
	public:
		TreeNode<T>* node;
		int sum;
};

MaxNodePair<int>* maxSumNodeHelper(TreeNode<int>* root){
	// edge case
	if(root == NULL){
		MaxNodePair<int>* pair = new MaxNodePair<int>();
		pair->node = NULL;
		pair->sum = INT_MIN;
		return pair;
	}
	
	// base case
	// scall case
	int sum = root -> data;
	
	for(int i = 0; i < root -> children.size(); i++){
		sum += root -> children[i] -> data;
	}
	
	MaxNodePair<int>* ans = new MaxNodePair<int>();
	ans -> node = root;
	ans -> sum = sum;
	
	// recur case
	for(int i = 0; i < root -> children.size(); i++){
		MaxNodePair<int>* childAns = maxSumNodeHelper(root -> children[i]); // if we havent used pair then we had to again calcualate the sum of the max or chilAns and then compare;
		if(childAns -> sum > ans -> sum){
			ans = childAns;
		}
	}
	
	return ans;
	
}

// function 
TreeNode<int>* maxSumNode(TreeNode<int>* root) {
	return maxSumNodeHelper(root)-> node;

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
	TreeNode<int>* print = maxSumNode(root);
	
	// print the data of the node
	cout << print -> data << endl;
}
