/*

9-Square-Root-Integral

Given a number N, find its square root. You need to find and print only the integral part of square root of N.
For eg. if number given is 18, answer is 4.

Input format :
Integer N

Output Format :
Square root of N (integer part only)

Constraints :
0 <= N <= 10^8

Sample Input 1 :
10

Sample Output 1 :
3

Sample Input 2 :
4

Sample Output 2 :
2

*/

#include <iostream>
using namespace std;

int main(){
	
	// take a number
	
	int n;
	cin >> n;
	int q, i;
	
	// loop from 1 to n/ 2 - 1 and check if divisor == quotient
	
	for(i = 1; i <= n; i++){   // till n so that 4 doesn't get butchered
		q = n / i;
		if(i == q){
			break;				// break the loop
		}
	}
	cout << q;					// i found this result by observing the calculator


// there is a whole different solution using output * output method

//	int output = 0; 
//	while(output * output <= n){
//		output++;
//	}

//	cout << --output << endl;

}











