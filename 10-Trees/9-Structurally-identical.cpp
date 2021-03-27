/*

9-Structurally-identical

Given two generic trees, return true if they are structurally identical. Otherwise return false.
Structural Identical
If the two given trees are made of nodes with the same values and the nodes are arranged in the same way, then the trees are called identical.  

Input format :
The first line of input contains data of the nodes of the first tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.  
The following line of input contains data of the nodes of the second tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.

Output format :
The first and only line of output contains true, if the given trees are structurally identical and false, otherwise.

Constraints:
Time Limit: 1 sec

Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 
10 3 20 30 40 2 40 50 0 0 0 0

Sample Output 1 :
true

Sample Input 2 :
10 3 20 30 40 2 40 50 0 0 0 0 
10 3 2 30 40 2 40 50 0 0 0 0

Sample Output 2:
false

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
bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
	//edge case
	if(root1 == NULL || root2 == NULL){
		return false;
	}
	// base case
	// scall case
	bool ans = true;
	if(root1 -> data != root2 -> data){ // checking if data of 2 treenodes are same or not
		ans = false;
	}
	if(root1 -> children.size() != root1 -> children.size()){ // checking they have similar no. of childrens so that we can get the idea of the structure of the tree
		ans = false;
	}
	
	// recur case
	for(int i  = 0; i < root1 -> children.size(); i++){		
		ans = ans && areIdentical(root1 -> children[i], root2 -> children[i]);
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
	TreeNode<int>* root1 = takeIntegerInputLevelWise();
	TreeNode<int>* root2 = takeIntegerInputLevelWise();
	
	// call the function// catch the return in a variable and then print it 
	bool print = areIdentical(root1, root2) ;
	if(print){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
}
