/*

1-Print-Level-Wise

Given a generic tree, print the input tree in level wise order.
For printing a node with data N, you need to follow the exact format -
N:x1,x2,x3,...,xn
where, N is data of any node present in the generic tree. x1, x2, x3, ...., xn are the children of node N. Note that there is no space in between.
You need to print all nodes in the level order form in different lines.

Input format :
The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.

Output Format :
The first and only line of output contains the elements of the tree in level wise order, as described in the task.

Constraints:
Time Limit: 1 sec

Sample Input 1:
10 3 20 30 40 2 40 50 0 0 0 0 

Sample Output 1:
10:20,30,40
20:40,50
30:
40:
40:
50:

*/

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


// define printLevelWise
void printLevelWise(TreeNode<int>* root){
	queue<TreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	
	while(!pendingNodes.empty()){
		TreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout << front->data << ":";
		
		for(int i = 0; i < front -> children.size(); i++){
			if(i <((front -> children.size()) - 1)){
				cout << front -> children[i] -> data << ",";
			}
			else{
				cout << front-> children[i]-> data;
			}
			
			pendingNodes.push(front->children[i]);
		}	
		cout << "\n";
	}
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

// int main
int main(){
	// take input from the user
	TreeNode<int>* root = takeIntegerInputLevelWise();
	
	// print it level wise
	printLevelWise(root);

}

