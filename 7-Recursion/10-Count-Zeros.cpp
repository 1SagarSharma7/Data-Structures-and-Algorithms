/*

10-Count-Zeros

Given an integer N, count and return the number of zeros that are present in the given integer using recursion.

Input Format :
Integer N

Output Format :
Number of zeros in N

Constraints :
0 <= N <= 10^9

Sample Input 1 :
0

Sample Output 1 :
1

Sample Input 2 :
00010204

Sample Output 2 :
2

Explanation for Sample Output 2 :
Even though "00010204" has 5 zeros, the output would still be 2 because when you convert it to an integer, it becomes 10204.

Sample Input 3 :
708000

Sample Output 3 :
4

*/

#include <iostream>
using namespace std;

int countZeroes(int n){
	
	// base case
	
	if(n <= 9){
		
		if(n == 0){
			return 1;			// so that 0 doesnt gets ignore if its the only one
		}
		else{
			return 0;
		}
	}
	
	// recur case
	// scal case
	
	int remainder = n % 10;
	
	if(remainder == 0){
		return 1 + countZeroes(n / 10);
	}
	else{
		return 0 + countZeroes(n / 10);
	}
	
	
}

int main(){
	
	// take a integer
	
	int n;
	cin >> n;
	
	//call the function and pass the integer
	
	cout << countZeroes(n);

}


