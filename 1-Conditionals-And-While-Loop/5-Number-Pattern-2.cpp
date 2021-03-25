/* 
Number Pattern 2

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

Sample Input :
5

Sample Output :
          1
         23
        345
       4567
      56789

*/

#include <iostream>
using namespace std;

int main(){
	
	//Take a input named n which is goona be the number of rows
	
	int n;
	cin >> n;
	
	//Here we have to take 3 for loops 1st for rows 2nd for blank columns 3rd for the numbers// print accordingly
	
	for(int i = 1; i <= n; i++){
		int a = i;
		for(int j = n - i; j >= 1; j--){
			cout << " ";
		}
		for(int k = 1; k <= i; k++){
			cout << a ;
			a++;
		}
		cout << endl;
	}
	
}
