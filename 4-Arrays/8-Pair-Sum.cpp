/* 

8-Pair-Sum

You have been given an integer array/list(ARR) and a number X. Find and return the total number of pairs in the array/list which sum to X.
Note:
Given array/list can contain duplicate elements. 

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the first array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.

Third line contains an integer 'X'.

Output format :
For each test case, print the total number of pairs present in the array/list.

Output for every test case will be printed in a separate line.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
0 <= X <= 10^9
Time Limit: 1 sec

Sample Input 1:
1
9
1 3 6 2 5 4 3 2 4
7

Sample Output 1:
7

Sample Input 2:
2
9
1 3 6 2 5 4 3 2 4
12
6
2 8 10 5 -2 5
10

Sample Output 2:
0
2


Explanation for Input 2:
Since there doesn't exist any pair with sum equal to 12 for the first query, we print 0.

For the second query, we have 2 pairs in total that sum up to 10. They are, (2, 8) and (5, 5).

*/

#include <iostream>
using namespace std;

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
		
		// Take x
		int x;
		cin >> x;
		int ans = 0;
		
		// 2 loops if 9 elements then 81 ie 9 ** 2 comparisons for pair
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(arr[i] + arr[j] == x && i != j){			// if we have started the j from i + 1 then we wouldnt have to divide the ans by 2
					ans++;									// and would have to check i != j
				}			
			}
		}
		
		cout << ans / 2 << endl;
				
    }

}

