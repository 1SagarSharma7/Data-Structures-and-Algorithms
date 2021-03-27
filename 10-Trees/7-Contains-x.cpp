/*

7-Contains-x

Given a generic tree and an integer x, check if x is present in the given tree or not. Return true if x is present, return false otherwise.

Input format :
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.  
The following line contains an integer, that denotes the value of x.

Output format :
The first and only line of output contains true, if x is present and false, otherwise.

Constraints:
Time Limit: 1 sec

Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0
40 

Sample Output 1 :
true

Sample Input 2 :
10 3 20 30 40 2 40 50 0 0 0 0
4 

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
bool isPresent(TreeNode<int>* root, int x) {
	//edge case
	if(root == NULL){
		return false;
	}
	// base case
	// scall case
	bool ans = false;
	if(root -> data == x){
		ans = true;
	}
	// recur case
	for(int i = 0; i < root -> children.size(); i++){
		ans = ans || isPresent(root -> children[i], x);
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
	
	int x; 
	cin >> x;
	// call the function// catch the return in a variable and then print it 
	if(isPresent(root, x)){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
}
