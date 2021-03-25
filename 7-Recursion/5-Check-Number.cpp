/* 

5-Check-Number

Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
Do this recursively.

Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x

Output Format :
'true' or 'false'

Constraints :
1 <= N <= 10^3

Sample Input 1 :
3
9 8 10
8

Sample Output 1 :
true

Sample Input 2 :
3
9 8 10
2

Sample Output 2 :
false

*/

#include <iostream>
using namespace std;

bool checkNumber(int arr[], int n, int x){
	
	// base case
	if(n == 0){
		return false;
	}
	
	// scal case (small calculation case)
	if(arr[0] == x){
		return true;					// through this as soon as it finds the element it is goona return 
	}
	
	// recur case
	return checkNumber(arr + 1, n - 1, x);
	
}

int main(){
	
	// take input
	int n;
	cin >> n;
	
	// taking Elements of the array
	int arr[100] = {0};
	
	for(int i = 0; i < n; i++){
		cin >> arr[i]; 
	}
	
	// element that has to checked 
	int x;
	cin >> x;
	
	if(checkNumber(arr, n, x)) {
		cout << "True" << endl;
	}
	
	else {
		cout << "False" << endl;
	}
	
} 
