/* 

1-Array-Sum

Given an array of length N, you need to find and print the sum of all elements of the array.

Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces

Output Format :
Sum

Constraints :
1 <= N <= 10^6

Sample Input :
3
9 8 9

Sample Output :
26

*/

#include <iostream>
using namespace std;

int main(){
	
	// start with a array of size hundred
	
	int arr[100];
	
	// ask the user a the size of the array
	
	int n;
	cin >> n;
	int sum;
	
	// accordingly loop and ask for those numbers and also add it at the same time
	
	for(int i = 0; i < n; i++){
		
		cin >> arr[i];						
		sum += arr[i];
		
	}
	 
	//  print the sum
	
	cout << sum << endl;
	
	
	
	
}
