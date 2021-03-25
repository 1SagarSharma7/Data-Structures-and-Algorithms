/*

13-Sum-of-digits-(recursive)

Write a recursive function that returns the sum of the digits of a given integer.

Input format :
Integer N

Output format :
Sum of digits of N

Constraints :
0 <= N <= 10^9

Sample Input 1 :
12345

Sample Output 1 :
15

Sample Input 2 :
9

Sample Output 2 :
9

*/

#include <iostream>
using namespace std;

int sumOfDigitsRecursively(int n){
	
	// base case
	
	if(n <= 9){
		
		return n;
		
	}
		
	// recur case
	// scal case
	
	return n % 10 + sumOfDigitsRecursively(n / 10); // we could have also separated  the two by nameing remainder and smallOutput  
	
}

int main(){
	
	// take a integer
	int n;
	cin >> n;
	
	// cal teh recur function for the addition of the digits of the number
	cout <<	sumOfDigitsRecursively(n);
	
	
	
}
