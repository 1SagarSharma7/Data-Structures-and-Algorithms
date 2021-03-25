/* 

Start Pattern

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
 
 int main(){
 	
 	// Take a input n, which is goona be number of row and the spaces i have to leave at decremental way
 	
 	int n;
 	cin >> n;
 	int a = 1;
 	
 	//3 for loops 1st rows 2nd spaces 1 decrement 3rd stars 2 increment
 	
 	for(int i = 1; i <= n; i++){
 		for(int j = n - i; j >= 1; j--){
 			cout << " ";
		}
		
		for(int k = 1; k <= a; k++){  // could have also did it with j <= 2 * i - 1
			cout << "*";				// But its much more easier with just keep on increasing 2
		}
		a += 2;
		cout << endl;
	}
 	
 }
