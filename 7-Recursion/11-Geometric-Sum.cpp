/*

11-Geometric-Sum

Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
using recursion.

Input format :
Integer k

Output format :
Geometric sum (upto 5 decimal places)

Constraints :
0 <= k <= 1000

Sample Input 1 :
3

Sample Output 1 :
1.87500

Sample Input 2 :
4

Sample Output 2 :
1.93750

*/

#include <iostream>
#include <math.h>
using namespace std;

float geometricSum(int k){
	
	// base case
	if(k == 0){
		return 1;
	}
	
	// recur case
	
	float smallOutput = geometricSum(k - 1);
	
	// scal case
	
	return smallOutput + float(1 / pow(2, k)); // i have used a library math for the power
	
}

int main(){

	// take integer
	int k;
	cin >> k;
	
	cout << geometricSum(k);	

}

