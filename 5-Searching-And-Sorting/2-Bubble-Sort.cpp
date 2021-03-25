/* 

2-Bubble-Sort

Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Bubble Sort'.
Note:
Change in the input array/list itself. You don't need to return or print the elements.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.

Output format :
For each test case, print the elements of the array/list in sorted order separated by a single space.

Output for every test case will be printed in a separate line.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
Time Limit: 1 sec

Sample Input 1:
1
7
2 13 4 1 3 6 28

Sample Output 1:
1 2 3 4 6 13 28

Sample Input 2:
2
5
9 3 6 2 0
4
4 3 2 1

Sample Output 2:
0 2 3 6 9
1 2 3 4

*/

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
	
	int n = size - 1;
	while(n--){			// this thing has to be performed size - 1 times aur the last element or i should say the 1st element will automatically be in its place
	
		// two markers marking starts at i 0 and j 1 indices
		
		int i = 0, j = 1;
		int temp;
		
		
		while(j < size){			// it goes till i = size - 2(we are already used 2 elements 0 and 1 so) and j = size - 1(arr so)
			
			// compare if arr[i] > arr[j] // swap 
			
			if(arr[i] > arr[j]){
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
			
			// or else i++ and j++ in any case // j < size
			
			i++;
			j++;	
		}
	}
}

int main(){
	
	// test cases
	int t;
	cin >> t;
	while(t--){
			
		// Take the size of the array from the user
		
		int arr[100];
		int size;
		cin >> size;
		
		// Also take the input using a loop
		
		for(int i = 0; i < size; i++){
			cin >> arr[i];
		}
		
		// Function 
		
		
		bubbleSort(arr, size);
		
		// print the array
		
		for(int i = 0; i < size; i++){
			cout << arr[i] << " ";
		}
    }
}

/* 

void bubbleSort(int *input, int size){

for(int i = 0; i < size - 1; i++){
	for( int j = 0; j < size - i - 1; j++){
		if(input[j] > input[j + 1]){
			int temp = input[j];
			input[j] = input[j + 1];
			input[j + 1] = temp;
		}
	}


*/
