/*
 
7-Binary-to-decimal

Given a binary number as an integer N, convert it into decimal and print.

Input format :
An integer N in the Binary Format

Output format :
Corresponding Decimal number (as integer)

Constraints :
0 <= N <= 10^9

Sample Input 1 :
1100

Sample Output 1 :
12

Sample Input 2 :
111

Sample Output 2 :
7

*/

#include <iostream>
using namespace std;

int main(){
	
// take n in the form of int for binary

int n;
cin >> n;
int ans = 0;
int two = 1;
int r;
int ans1;

// iterate it in the opposite direction

while(n != 0){
	r = n % 10;
	ans1 = r * two;
	n /= 10;
	ans += ans1; 
	two *= 2;
}

// print 

cout << ans;

}




























