/* 

4-Swap-Alternate

You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list.
You don't need to print or return anything, just change in the input array itself.

Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.

Output Format :
For each test case, print the elements of the resulting array in a single row separated by a single space.

Output for every test case will be printed in a separate line.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1sec

Sample Input 1:
1
6
9 3 6 12 4 32

Sample Output 1 :
3 9 12 6 32 4

Sample Input 2:
2
9
9 3 6 12 4 32 5 11 19
4
1 2 3 4

Sample Output 2 :
3 9 12 6 32 4 11 5 19 
2 1 4 3 

*/

#include <iostream>
using namespace std;

int main(){

	// Take the size of the array from the user
	
	int arr[100];
	int n;
	cin >> n;
	
	// Also take the input using a loop
	
	for(int i = 0; i < n; i++){
		int c;
		cin >> c;
		arr[i] = c;
	}
	
	// Create a another loop which runs n/2 times // and using temp while switching
	
	int x = 0;
	int y = 1;
	int temp;
	for(int j = 1; j <= n / 2; j++){
		temp = arr[x];					// could have also used x and x + 1, no need of y 
		arr[x] = arr[y];				// could have also used 2 * i and 2 * i + 1 , no need of x and y
		arr[y] = temp;
		
		x += 2;
		y += 2;
	}
	
	// Print the array
	
	for(int z = 0; z < n; z++){
		cout << arr[z] << " ";
	}
	
}
