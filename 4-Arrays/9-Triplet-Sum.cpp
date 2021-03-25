/* 

9-Triplet-Sum

You have been given a random integer array/list(ARR) and a number X. Find and return the number of triplets in the array/list which sum to X.
Note :
Given array/list can contain duplicate elements.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the first array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.

Third line contains an integer 'X'.

Output format :
For each test case, print the total number of triplets present in the array/list.

Output for every test case will be printed in a separate line.

Constraints :
1 <= t <= 50
0 <= N <= 10^2
0 <= X <= 10^9
Time Limit: 1 sec

Sample Input 1:
1
7
1 2 3 4 5 6 7 
12

Sample Output 1:
5

Sample Input 2:
2
7
1 2 3 4 5 6 7 
19
9
2 -5 8 -6 0 5 10 11 -3
10

Sample Output 2:
0
5

 Explanation for Input 2:
Since there doesn't exist any triplet with sum equal to 19 for the first query, we print 0.

For the second query, we have 5 triplets in total that sum up to 10. They are, (2, 8, 0), (2, 11, -3), (-5, 5, 10), (8, 5, -3) and (-6, 5, 11)

*/

#include <iostream>
using namespace std;

void tripletSum(int arr[], int n){
	
	int ans = 0;
	
	// Take x
		int x;
		cin >> x;
		
		// 3 loops if 3 elements then 81 ie 9 ** 2 comparisons for pair
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){				// should have done i -> j = i + 1 -> k = j + 1
				for(int k = 0; k < n; k++){
					if(arr[i] + arr[j] + arr[k] == x && i != j && i != k && j != k){
						ans++;
					}
				}
			}
		}
		
		cout << ans / 6 << endl;   // 1 + 4 + 3 is 8 too and 4 + 1 + 3 is 8 as well so it and 6 other 
}	


int main(){
	
	// test cases
	int t;
	cin >> t;
	while(t--){
			
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
		
		// function creation
		tripletSum(arr, n);
    }

}

