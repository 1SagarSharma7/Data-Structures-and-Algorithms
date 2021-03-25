/* 

12-Diamond-of-stars

Print the following pattern for the given number of rows.
Note: N is always odd.
    *
   ***
  *****
   ***
    *
Pattern for N = 5

The dots represent spaces.

Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines

Constraints :
1 <= N <= 49

Sample Input 1:
5

Sample Output 1:
  *
 ***
*****
 ***
  *

Sample Input 2:
3

Sample Output 2:
  *
 ***
  *
  
*/

#include <iostream>
using namespace std;

int main(){

// Take n
	int n;
	cin >> n;
	
// split it into n1 and n2

	int n1, n2;	
	n1 = n / 2 + 1;
	n2 = n / 2;
	int p1 = 1;
	int p2 = n2 * 2 - 1;
// print for n1
	for(int i1 = 1; i1 <= n1; i1++){
		for(int k1 = 1; k1 <= n1 - i1; k1++){
			cout << " ";
		}
		for(int j1 = 1; j1 <= p1; j1++){
			cout << "*";
		}
		p1 += 2;
		cout << endl;
	}
	
// print for n2
	for(int i2 = 1; i2 <= n2; i2++){
		for(int k2 = 1; k2 <= i2; k2++){
			cout << " ";
		}
		for(int j2 = 1; j2 <= p2; j2++){
			cout << "*";
		}
		p2 -= 2;
		cout << endl;
	}
}
