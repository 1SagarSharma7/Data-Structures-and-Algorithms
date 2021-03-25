/* 

4-Sum-or-Product

Write a program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the sum and computing 
the product of all integers in the range 1 to N (both inclusive).

If C is equal to -
 1, then print the sum
 2, then print the product
 Any other number, then print '-1' (without the quotes)

Input format :
Line 1 : Integer N
Line 2 : Choice C

Output Format :
Sum or product according to user's choice

Constraints :
1 <= N <= 12

Sample Input 1 :
10
1

Sample Output 1 :
55

Sample Input 2 :
10
2

Sample Output 2 :
3628800

Sample Input 3 :
10
4

Sample Output 3 :
-1

*/

#include <iostream>
using namespace std;

int main(){
	
	// take n 
	
	int n;
	cin >> n;
	
	// if which directs to 1 loop of sum and the other of product // ans should be of long // seperate loops for both
	
	int c;
	cin >> c;
	
	int pro = 1, sum = 0;
	int ans;
	
	if(c == 1){							// for sum
		for(int i = 1; i <= n; i++){
			sum += i;
		}
		ans = sum;
	}
	
	else if(c == 2){
		for(int i = 1; i <= n; i++){	// for product
			pro *= i;
		}
		ans = pro;	
    }
	else{								// for other
		cout << "-1" << endl;
		return 0;
	}
	
	
	
	cout << ans << endl;
	
	
}
