/*

11-Second-Largest-Element-In-Tree

Given a generic tree, find and return the node with second largest value in given tree.
Note: Return NULL if no node with required value is present.

Input format :
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.

Output Format :
The first and only line of output contains data of the node with second largest data.

Constraints:
Time Limit: 1 sec

Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1 :
40

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
1 3 2 3 4 0 0 0
*/

// function 

template <typename T>
class SecondLargestReturnType{
	public:
	TreeNode<T>* largest;
	TreeNode<T>* secondLargest;
	
	SecondLargestReturnType(TreeNode<T>* first, TreeNode<T>* second){
		this -> largest = first;
		this -> secondLargest = second;
	}
};

SecondLargestReturnType<int>* getSecondLargestNodeHelper(TreeNode<int>* root) {
	if(root == NULL){
		return new SecondLargestReturnType<int>(NULL, NULL);
	}
	
	SecondLargestReturnType<int>* ans = new SecondLargestReturnType<int>(root, NULL);
	
	// INCOMPLETE
	
	
}

TreeNode<int>* getSecondLargestNode(TreeNode<int>* root){
	return getSecondLargestNodeHelper(root)->secondLargest;
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
	TreeNode<int>* print = getSecondLargestNode(root);
	cout << print -> data << endl;
}
