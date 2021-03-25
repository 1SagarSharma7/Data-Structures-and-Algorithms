/*

3-Trim-Spaces

Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word.

Input Format :
 String S

Output Format :
Updated string

Constraints :
1 <= Length of string S <= 10^6

Sample Input :
abc def g hi


Sample Output :
abcdefghi

*/

#include <iostream>
using namespace std;

void trimSpaces(char str[]){
	
	// loop till null // check for spaces if any shift the remaining string towards left
	
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] == 32){				// checking for spaces
			int j;
			for(j = i + 1; str[j] != '\0'; j++){		// if found any shifting in its place
				str[j - 1] = str[j];
			}
			str[j - 1] = str[j];	// shifting the null character too
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
		cin.getline(str, 100);
		
		// Also take the input using a loop

//		for(int i = 0; i < size; i++){
//			cin >> arr[i];
//		}
		
		// Function 
		
		
		trimSpaces(str);
		
		// print the char array
		
		for(int i = 0; str[i] != '\0'; i++){
			cout << str[i];
		}

//    }

}
