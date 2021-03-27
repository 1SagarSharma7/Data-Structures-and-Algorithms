/*

10-Next-larger

Given a generic tree and an integer n. Find and return the node with next larger element in the tree i.e. find a node with value just greater than n.
Note: Return NULL if no node is present with the value greater than n.

Input format :
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.  
The following line contains an integer, that denotes the value of n.

Output format :
The first and only line of output contains data of the node, whose data is just greater than n.

Constraints:
Time Limit: 1 sec

Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 
18

Sample Output 1 :
20

Sample Input 2 :
10 3 20 30 40 2 40 50 0 0 0 0 
21

Sample Output 2:
30

*/

/*
the number we are finding the tree should be larger than the number we are finding but it should 
be least than all the number which are greter than the number we are finding in the tree.
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
TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
	//edge case
	if(root == NULL){
		return root;
	}
	// base case
	// recur case
	// scall case
	TreeNode<int>* ans = NULL;
	TreeNode<int>* max = NULL;
	
	if(root -> data > x){
		max = root;
	}
	for(int i = 0; i < root -> children.size(); i++){
		ans = getNextLargerElement(root -> children[i], x);
//		if(max == NULL){
//			max = ans;		// ye possibility consider nahi kiya tha
//		}
		else if(ans != NULL && ans -> data < max -> data){
			max = ans;
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
	
	int x;
	cin >> x;
	// call the function// catch the return in a variable and then print it 
	TreeNode<int>* print = getNextLargerElement(root, x);
	cout << print -> data << endl;
}
