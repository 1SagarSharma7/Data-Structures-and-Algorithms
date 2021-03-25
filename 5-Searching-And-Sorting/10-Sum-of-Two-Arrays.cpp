/*

10-Sum-of-Two-Arrays

Two random integer arrays/lists have been given as ARR1 and ARR2 of size N and M respectively. 
Both the arrays/lists contain numbers from 0 to 9(i.e. single digit integer is present at every index).
The idea here is to represent each array/list as an integer in itself of digits N and M.
You need to find the sum of both the input arrays/list treating them as two integers 
and put the result in another array/list i.e. output array/list will also contain only single digit at every index.
Note:
The sizes N and M can be different. 

Output array/list(of all 0s) has been provided as a function argument. Its size will always be one more than the size of the bigger array/list. 
Place 0 at the 0th index if there is no carry. 

No need to print the elements of the output array/list.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the first array/list.

Second line contains 'N' single space separated integers representing the elements of the first array/list.

Third line contains an integer 'M' representing the size of the second array/list.

Fourth line contains 'M' single space separated integers representing the elements of the second array/list.

Output Format :
For each test case, print the required sum of the arrays/list in a row, separated by a single space.

Output for every test case will be printed in a separate line.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
0 <= M <= 10^5

Time Limit: 1 sec 

Sample Input 1:
1
3
6 2 4
3
7 5 6

Sample Output 1:
1 3 8 0

Sample Input 2:
2
3
8 5 2
2
1 3
4
9 7 6 1
3
4 5 9

Sample Output 2:
0 8 6 5
1 0 2 2 0 

*/

#include <iostream>
using namespace std;

/* 
1
3
1 2 3
3 
3 2 1
*/

void sumOfTwoArrays(int arr1[],int arr2[],int ansArr[],int size1,int size2,int ansArrSize){
	
		// run while till any one of the arr exhausts
		
		int i = size1 - 1, j = size2 - 1, k = ansArrSize - 1;
		int carry = 0, notCarry = 0, sum = 0;

		for(; i >= 0 && j >= 0; i--, j--, k--){
			
			sum = arr1[i] + arr2[j] + carry;
			carry = sum / 10;					// quotient after the division
			notCarry = sum % 10;				// gives the remainder after the divide
			ansArr[k] = notCarry;
		}
			
		for(; i >= 0; i--, k--){
			sum = arr1[i] + carry;
			carry = sum / 10;
			notCarry = sum % 10;
			ansArr[k] = notCarry;
		}
		
		for(;j >= 0; j--, k--){
			sum = arr2[j] + carry;
			carry = sum / 10;
			notCarry = sum % 10;
			ansArr[k] = notCarry;
		}
//		
		ansArr[0] = carry; // if there might be a carry at the 0th elements of the array
//		
//		// print the array
//		
		for(int z = 0; z < ansArrSize; z++){
			cout << ansArr[z] << " ";
		}
	}

	// Driver Code
int main(){
	
	// test cases
	int t;
	cin >> t;
	while(t--){
			
		// Take the size of the array from the user
		
		int arr1[100];
		int size1;
		cin >> size1;
		
		// Also take the input using a loop
		
		for(int i = 0; i < size1; i++){
			cin >> arr1[i];
		}
		
		// Take the size of the array from the user
		
		int arr2[100];
		int size2;
		cin >> size2;
		
		// Also take the input using a loop
		
		for(int i = 0; i < size2; i++){
			cin >> arr2[i];
		}
		
		int ansArr[100] = {0};
		int ansArrSize;
		if(size1 >= size2){
			ansArrSize = size1 + 1;
		}
		else{
			ansArrSize = size2 + 1;
		}
		// Function 
		
		sumOfTwoArrays(arr1, arr2, ansArr, size1, size2, ansArrSize);	
    }
}

