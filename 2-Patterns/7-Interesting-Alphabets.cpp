/* 

7-Interesting-Alphabets

Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE

Input format :
N (Total no. of rows)

Output format :
Pattern in N lines

Constraints
0 <= N <= 26

Sample Input 1:
8

Sample Output 1:
H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH

Sample Input 2:
7

Sample Output 2:
G
FG
EFG
DEFG
CDEFG
BCDEFG
ABCDEFG

*/

#include <iostream>
using namespace std;
 
// How many rows? // n
 
int main(){
 
int n;
cin >> n;
for(int i = 1; i <= n; i++){
 	
// How many columns for ith row? i
	for(int j = 1; j <= i; j++){		// Again you can also do this using variable easily
	 	
// What to print? 65 + n - i + j - 1
 	cout << char(65 + n - i + j - 1);	// - i so that it gets decremented according to rows 
    }									// + j so that it can get incremented according to column
	cout << endl;						// for the 1st row
}
}
