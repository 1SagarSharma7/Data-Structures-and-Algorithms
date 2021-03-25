/*

15-Remove-X

Given a string, compute recursively a new string where all 'x' chars have been removed.

Input format :
String S

Output format :
Modified String

Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S. 

Sample Input 1 :
xaxb

Sample Output 1:
ab

Sample Input 2 :
abc

Sample Output 2:
abc

Sample Input 3 :
xx

Sample Output 3:


*/


#include <iostream>
using namespace std;

int stringLength(char str[]){
	
	int count = 0;
	for(int i = 0; str[i] != '\0'; i++){	
		
		count++;
		
	}
	return count;
}


void removeX(char str[]){
	
	// base case
	if(str[0] == '\0'){
		return;
	}
	
	// recur case
	removeX(str + 1);
	
	// scal case
	
	if(str[0] == 'x'){
		
		int len = stringLength(str);
		for(int i = 1; i <= len + 1; i++){		// len + 1 so that it can cover null character too
			str[i - 1] = str[i];				// shifting everything in front of x 
		}
		
	}
	
}


int main(){
	
	// creating and taking input in the string
	char str[100];
	cin >> str;
	
	// calling the recursive function
	removeX(str);
	
	// print the string
	cout << str;
	
}
