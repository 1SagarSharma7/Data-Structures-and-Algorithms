/* 
10-Star-Pattern

Print the following pattern
Pattern for N = 4
   *
  ***
 *****
*******

The dots represent spaces.

Input Format :
N (Total no. of rows)

Output Format :
Pattern in N lines

Constraints :
0 <= N <= 50

Sample Input 1 :
3

Sample Output 1 :
   *
  *** 
 *****

Sample Input 2 :
4

Sample Output 2 :
    *
   *** 
  *****
 *******
 
 */
 
#include <iostream>
using namespace std;
 
// How many rows? // n
 
int main(){
 
int n;
cin >> n;
for(int i = 1; i <= n; i++){
	
// Loops for spaces
	for(int k = 1; k <= n - i; k++){
		cout << " ";
	}
 	
// How many columns for ith row? i * 2 - 1
	for(int j = 1; j <= i * 2 - 1; j++){			// the values are all related to i, j, n // may it be rows,col or print
	 	
// What to print? *
 	cout << "*";	
    }	
	cout << endl;
}
}
 
