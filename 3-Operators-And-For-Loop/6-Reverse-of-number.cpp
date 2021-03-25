/* 

6-Reverse-of-number

Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.

Input format :
Integer N

Output format :
Corresponding reverse number

Constraints:
0 <= N < 10^8

Sample Input 1 :
1234

Sample Output 1 :
4321

Sample Input 2 :
1980

Sample Output 2 :
891

*/

#include <iostream>
using namespace std;

int main(){
	
	// take n
	
	int n;
	cin >> n;
	
	// %10 then *10 + add // /10 loop
	
	int r = 0, ans = 0;			// intializing both by 0 so that theres no garbage value;
	
	while(n != 0){
		r = n % 10;
		ans = ans * 10 + r;		// we are automatically doughting the first situation where ans is zero
		n /= 10;		
	}
	
	// print it 
	
	cout << ans << endl;
}











