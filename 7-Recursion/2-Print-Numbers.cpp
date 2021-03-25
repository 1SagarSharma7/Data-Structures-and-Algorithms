/* 

2-Print-Numbers

Given is the code to print numbers from 1 to n in increasing order recursively. But it contains few bugs that you need to rectify such that all the test cases pass.

Input Format :
Integer n

Output Format :
Numbers from 1 to n (separated by space)

Constraints :
1 <= n <= 10000

Sample Input 1 :
 6

Sample Output 1 :
1 2 3 4 5 6

Sample Input 2 :
 4

Sample Output 2 :
1 2 3 4

*/

#include <iostream>
using namespace std;

void printNumbers(int n){
	
	// base case
																				
	if(n == 1){
		cout << n << " ";
		return;
	}
	
	// recur case
	
	printNumbers(n - 1);
	
	// scal case (small calculation case)
	
	cout << n << " ";
	return;
	
	

}

int main(){
	
	// take input
	int n;
	cin >> n;
	printNumbers(n);
	
}
