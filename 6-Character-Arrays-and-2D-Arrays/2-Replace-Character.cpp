/*

2-Replace-Character

Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.

Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)

Output Format :
Updated string

Constraints :
1 <= Length of String S <= 10^6

Sample Input :
abacd
a x

Sample Output :
xbxcd

*/

#include <iostream>
using namespace std;

void replaceCharacter(char str[]){
	
	// take c1 and c2
	
	char c1, c2;
	cin >> c1 >> c2;
	
	// iterate till null // if str[i] == c1 then replace i.e
	
	for(int i = 0; str[i] != '\0'; i++){
		
		if(str[i] == c1){
			str[i] = c2;
		}
	}

}


// Driver Code
int main(){
	
	// test cases
//	int t;
//	cin >> t;
//	while(t--){
			
		// Take the size of the array from the user
		
		char str[100];
		cin >> str;
		
		// Also take the input using a loop

//		for(int i = 0; i < size; i++){
//			cin >> arr[i];
//		}
		
		// Function 
		
		
		replaceCharacter(str);
		
		// print the char array
		
		for(int i = 0; str[i] != '\0'; i++){
			cout << str[i];
		}

//    }

}
