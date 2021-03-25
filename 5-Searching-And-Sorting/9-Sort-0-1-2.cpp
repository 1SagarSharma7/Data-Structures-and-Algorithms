/* 

9-Sort-0-1-2

You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. Write a solution to sort this array/list in a 'single scan'.
'Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.
Note:
You need to change in the given array/list itself. Hence, no need to return or print anything. 

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers(all 0s, 1s and 2s) representing the elements in the array/list.

Output Format :
For each test case, print the sorted array/list elements in a row separated by a single space.

Output for every test case will be printed in a separate line.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1 sec

Sample Input 1:
1
7
0 1 2 0 2 0 1

Sample Output 1:
0 0 0 1 1 2 2 

Sample Input 2:
2
5
2 2 0 1 1
7
0 1 2 0 1 2 0

Sample Output 2:
0 1 1 2 2 
0 0 0 1 1 2 2

*/

#include <iostream>
using namespace std;

void sortZeroOneTwo(int arr[], int size){
	
	//  one , two and zero -> find zero from front // two -> find two from back and let one flow free
	
	// create and initialize one , zero and two
	
	int nextZero = 0, one = 0, nextTwo = size - 1;
	
	// loop one and add ifs to find zero and two and then place them at there respective positions
	
	for(;one <= nextTwo;){
		
		if(arr[one] == 0){						// there's a zero in the place of one 
			
			int temp = arr[one];
			arr[one++] = arr[nextZero];
			arr[nextZero++] = temp;
			
		}
		
		else if(arr[one] == 2){				// there's a two in the palce of one
			
			int temp = arr[one];
			arr[one] = arr[nextTwo];    // the reason why we dont increment one here is its not like zero which has came here by checking for zeros before him 
			arr[nextTwo--] = temp;		// .. here its a possiblility that the number which we have swapped here is a two so we have to swap it again 
			
		}
		
		else{
			
			one++;
			
		}
	}	
	
}


// Driver Code
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
		
		
		sortZeroOneTwo(arr, size);
		
		// print the array
		
		for(int i = 0; i < size; i++){
			cout << arr[i] << " ";
		}
    }

}
