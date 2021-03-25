/* 

5-Push-Zeros-to-end

You have been given a random integer array/list(ARR) of size N. You have been required to push all the zeros that are present in the array/list to the end of it. Also, make sure to maintain the relative order of the non-zero elements.
Note:
Change in the input array/list itself. You don't need to return or print the elements.

You need to do this in one scan of array only. Don't use extra space.


Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.

Output Format :
For each test case, print the elements of the array/list in the desired order separated by a single space.

Output for every test case will be printed in a separate line.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1 sec

Sample Input 1:
1
7
2 0 0 1 3 0 0

Sample Output 1:
2 1 3 0 0 0 0
 
Explanation for the Sample Input 1 :
All the zeros have been pushed towards the end of the array/list. Another important fact is that the order of the non-zero elements have been maintained as they appear in the input array/list.

Sample Input 2:
2
5
0 3 0 2 0
5
9 0 0 8 2

Sample Output 2:
3 2 0 0 0
9 8 2 0 0 

*/

#include <iostream>
using namespace std;

void pushZeroesToEnd(int arr[], int size){
	
	//  two markers 1 from start for the non numbers and the other from end for the non zeros
	
	int i = 0, j = 0;
	
	// let the marker from the start a sero number and the marker form the end find a non zero number then swap // till i < j
	
	while(i < size && j < size){
		while(arr[i] != 0 && i < size){
			i++;								// i < size is unnecessary here // loop to find 0
		}
		
		j = i + 1;
		
		while(arr[j] == 0 && j < size){			// j < size is necessary to stop it at size 
			j++;								// its a loop to find a non zero number 
		}
		
		if(j == size)
		{
			break;      	// j < size restricts it from going any further that size + 1 but it still swaps // the break is to stop the swap
		}
		
		int temp = arr[j];		// ye hai hamare index
		arr[j] = arr[i];		// ye hai uske values
		arr[i] = temp; 			// aur yaha swaping ho rahi hai
		
	}
	
	/* 
	
	2 0 1 0
	2 1 0 0		Dry Run
	
	
	*/
	
}

/*
int nonZero = 0;				// cleaner solution

for(int  i = 0; i < size; i++){
	if(input[i] != 0){
		int temp = input[i];
		input[i] = input[nonZero];
		input[nonZero] = temp;
		nonZero++;
	}
}
*/

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
		
		
		pushZeroesToEnd(arr, size);
		
		// print the array
		
		for(int i = 0; i < size; i++){
			cout << arr[i] << " ";
		}
    }

}
