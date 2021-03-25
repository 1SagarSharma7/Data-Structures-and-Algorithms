/* 

8-Mirror-Number-Pattern

Print the following pattern for the given N number of rows.
Pattern for N = 4
   1
  12
 123
1234
The dots represent spaces.

Input format :
Integer N (Total no. of rows)

Output format :
Pattern in N lines

Constraints
0 <= N <= 50

Sample Input 1:
3

Sample Output 1:
      1 
     12
    123

Sample Input 2:
4

Sample Output 2:
      1 
     12
    123
   1234
   
*/

#include <iostream>
using namespace std;
 
// How many rows? // n
 
int main(){
 
int n;
cin >> n;
for(int i = 1; i <= n; i++){
	
// Loop for spaces
	for(int k = 1; k <= n - i; k++){
		cout << " ";
	}
 	
// How many columns for ith row? i
	for(int j = 1; j <= i; j++){
	 	
// What to print? j
 	cout << j;	
    }	
	cout << endl;
}
}
