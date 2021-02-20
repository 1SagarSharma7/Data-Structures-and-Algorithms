/*

Number Pattern 1

Print the following pattern
Pattern for N = 4
1
23
345
4567

Input Format :
N (Total no. of rows)

Output Format :
Pattern in N lines

Sample Input 1 :
3

Sample Output 1 :
1
23
345

*/

#include <iostream>
using namespace std;

int main(){


	// Take a input which is gonna be the number of rows and the number from which the rows is going to start

	int n;
	cin >> n;

	// 2 for loops 1 for rows=>i and 1 for column=> j // print accordingly

	for(int i = 1; i <= n; i++){
		int a = i;
		for(int j = 1; j <= i; j++){
			cout << a;
			a++;
		}
		cout << endl;
	}
}
