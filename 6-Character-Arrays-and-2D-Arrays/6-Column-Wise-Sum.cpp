/* 

6-Column-Wise-Sum

Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space.

Input Format :
Line 1 : Two integers M and N (separated by space)
Next M lines : ith row elements (separated by space)

Output Format :
Sum of every ith column elements (separated by space)

Constraints :
1 <= M, N <= 10^3

Sample Input :
4 2
1 2
3 4
5 6
7 8

Sample Output :
16 20

*/

#include <iostream>
using namespace std;

void columnWiseSum(int arr[][100], int cols , int rows){
	
	for(int col = 0; col < cols; col++){			
		int sum = 0;				// declaring and defining sum inside the forloop so that we dont have to reset its value after the inner loop 
		for(int row = 0; row < rows; row++){
			sum += arr[row][col];
		}
		cout << sum << ' '; 
	}
	
}


// Driver Code
int main(){
	
	// test cases
//	int t;
//	cin >> t;
//	while(t--){
			
		// Take the size of the array from the user
		
		int arr[100][100];
//		cin >> str;
		
		int rows, cols;
		cin >> rows >> cols;
		
		// Also take the input using a loop

		for(int row = 0; row < rows; row++){
			for(int col = 0; col < cols; col++){
				cin >> arr[row][col];
			}
		}
		
		// Function 
		
		
		columnWiseSum(arr, cols, rows);
		
		// print the char array
		
//		for(int i = 0; str[i] != '\0'; i++){
//			cout << str[i];
//		}

//    }

}
