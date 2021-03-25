/* 

4-Code-Merge-Two-Sorted-Arrays

You have been given two sorted arrays/lists(ARR1 and ARR2) of size N and M respectively, merge them into a third array/list such that the third array is also sorted.

Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the first array/list.

Second line contains 'N' single space separated integers representing the elements of the first array/list.

Third line contains an integer 'M' representing the size of the second array/list.

Fourth line contains 'M' single space separated integers representing the elements of the second array/list.

Output Format :
For each test case, print the sorted array/list(of size N + M) in a single row, separated by a single space.

Output for every test case will be printed in a separate line.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
0 <= M <= 10^5
Time Limit: 1 sec 

Sample Input 1 :
1
5
1 3 4 7 11
4
2 4 6 13

Sample Output 1 :
1 2 3 4 4 6 7 11 13 

Sample Input 2 :
2
3
10 100 500
7
4 7 9 25 30 300 450
4
7 45 89 90
0

Sample Output 2 :
4 7 9 10 25 30 100 300 450 500
7 45 89 90

*/

#include <iostream>
using namespace std;

void mergeTwoSortedArray(int arr1[], int arr2[], int arr3[], int size1, int size2, int size3){
	
	// 3 markers 1 for i 1 for j and 1 for k
	
	int i = 0, j = 0, k = 0;
	
	// compare and insert the smaller one and incerement the one which we have inserted
	
	while(i < size1 && j < size2){  		// if any one of the two arrays exhausted it should stop
		
		if(arr1[i] <= arr2[j]){
			arr3[k++] = arr1[i++];
		}
		else if(arr1[i] > arr2[j]){
			arr3[k++] = arr2[j++];
		}

//		else if(arr1[i] == arr2[j]){    // unneccesary  could have added a equal condition with any of the two conditions above
//			arr3[k] = arr1[i];
//			arr3[++k] = arr2[j];
//			i++;
//			j++;
//			k++;
//		}
		
	}
	
		while(i < size1){
			arr3[k] = arr1[i];        	// remaining elements of the non exhuasted array
			i++;
			k++;
		}
		
		while(j < size2){
			arr3[k] = arr2[j];			// remaining elements of the non exhuastedd array
			j++;
			k++;
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
		
		int arr3[100] = {};
		int size3 = size1 + size2;
		
		// Function 
		
		
		mergeTwoSortedArray(arr1, arr2, arr3, size1, size2, size3);
		
		// print the array
		
		for(int i = 0; i < size3; i++){
			cout << arr3[i] << " ";
		}
    }

}
