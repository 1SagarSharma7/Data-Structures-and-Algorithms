/* 

1-Nth-Fibonacci-Number

Nth term of fibonacci series F(n) is calculated using following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) = F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.

Input Format :
Integer n

Output Format :
Nth Fibonacci term i.e. F(n)

Constraints:
1 <= n <= 25

Sample Input 1:
4

Sample Output 2:
3 

Sample Input 1:
6

Sample Output 2:
8

*/

#include <iostream>
using namespace std;

int main(){

// Take n

int n;
cin >> n;

// 1st is 1 and 2nd is also 1 // a and b

int a = 1;
int b = 1;
int c;

if(n == 1 || n == 2){
	cout << 1;
	return 0;
}

// reset all create a for loop and iterate till n// n starts from 3

for(int i = 3; i <= n; i++){
	c = a + b;
	a = b;
	b = c;
}

// print

cout << c;

}
