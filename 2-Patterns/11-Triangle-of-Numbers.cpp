/* 

11-Triangle-of-Numbers

Print the following pattern for the given number of rows.
Pattern for N = 4
           1
          232
         34543
        4567654

The dots represent spaces.

Input format :
Integer N (Total no. of rows)

Output format :
Pattern in N lines

Constraints :
0 <= N <= 50

Sample Input 1:
5

Sample Output 1:
           1
          232
         34543
        4567654
       567898765

Sample Input 2:
4

Sample Output 2:
           1
          232
         34543
        4567654
     
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
	 	
// What to print? i + j - 1
 	cout << i + j - 1;	
    }	
    
// Loop for other program
	for(int  x = 1; x < i; x++){	// x <= i is not used because we dont want to print 0 here
		cout << 2 * i - 1 - x;		// it should have here been - 2 but its nullified by x we // 0 2 4 6 sequence
		
	}
	
	cout << endl;
}
}


