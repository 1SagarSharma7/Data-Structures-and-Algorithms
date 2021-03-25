/* 

6-Character-Pattern

Print the following pattern for the given N number of rows.
Pattern for N = 4
A
BC
CDE
DEFG

Input format :
Integer N (Total no. of rows)

Output format :
Pattern in N lines

Constraints
0 <= N <= 13

Sample Input 1:
5

Sample Output 1:
A
BC
CDE
DEFG
EFGHI

Sample Input 2:
6

Sample Output 2:
A
BC
CDE
DEFG
EFGHI
FGHIJK

*/

#include <iostream>
using namespace std;
 
// How many rows? // n
 
int main(){
 
int n;
cin >> n;
for(int i = 1; i <= n; i++){
 	
// How many columns for ith row? i
	for(int j = 1; j <= i; j++){
	 	
// What to print? 65 + i + j - 2
 	cout << char(65 + i + j - 2);  //I have typecasted it using char() -2 is for each i and j // could have also used the another variable for the printing
    }	
	cout << endl;
}
}
