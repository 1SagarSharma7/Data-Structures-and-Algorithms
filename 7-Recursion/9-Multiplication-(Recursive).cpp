/*

9-Multiplication-(Recursive)

Given two integers M & N, calculate and return their multiplication using recursion. 
You can only use subtraction and addition for your calculation. No other operators are allowed.

Input format :
Line 1 : Integer M
Line 2 : Integer N

Output format :
M x N

Constraints :
0 <= M <= 1000
0 <= N <= 1000

Sample Input 1 :
3 
5

Sample Output 1 :
15

Sample Input 2 :
4 
0

Sample Output 2 :
0

*/

#include <iostream>
using namespace std;

int multiplicationRecursively(int n1, int n2){
	
	if(n2 > n1){
		multiplicationRecursively(n2 , n1); // less recursion faster the program
	}
	// base case	
	if(n2 == 0){
		return 0;
	}
	
	// scal case
	// recur case
	
	return n1 + multiplicationRecursively(n1, n2 - 1);
	
	
	
	
}

int main(){
	
	// take two numbers which we want to perform multiplication on recursively
	
	int n1, n2;
	cin >> n1 >> n2;
	
	// call the function and pass the value
	cout << multiplicationRecursively(n1, n2);
	
}
