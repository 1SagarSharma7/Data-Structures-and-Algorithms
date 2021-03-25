/* 

2-All-Prime-Numbers

Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.

Input Format :
Integer N

Output Format :
Prime numbers in different lines

Constraints :
1 <= N <= 100

Sample Input 1:
9

Sample Output 1:
2
3
5
7

Sample Input 2:
20

Sample Output 2:
2
3
5
7
11
13
17
19

*/

#include <iostream>
using namespace std;


int main(){
	
	// Take a number 
	
	int n;
	cin >> n;

	// Flag for the indication of prime or not
	
	//  for the number from 2 to n
	
	for(int i = 2; i <= n; i++){
	//  take that number and divide it by 2 to n - 1 if it gets divided "continue" and if it completes the loop print
		
		bool flag = true;
		for(int j = 2; j <= i - 1; j++){
			if(i % j == 0){
				flag = false;
				break;					// why to keep on going .. if you know that it is not a prime
			}
		}
		if(flag){						// is the flag is true that means the number is prime so print 
			cout << i << endl;
		}
	}
	
	
}

