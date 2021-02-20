/*
 
Sum of Even Numbers till N

Given a number N, print sum of all even numbers from 1 to N.

Input Format :
Integer N

Output Format :
Required Sum 

Sample Input 1 :
 6

Sample Output 1 :
12

*/

#include <iostream>
using namespace std;

int main(){
	
	// Declare Sum
	
	int sum = 0;
	int i = 0;
	int n;

	// Take the number till where we what to add 

	cin >> n; 
	
	// while combined with sum additions and a jump of 2
	
	while(i <= n){
		sum += i;
		i += 2;
	}
	
	// Print Sum
	
	cout << sum << endl;
			
}
