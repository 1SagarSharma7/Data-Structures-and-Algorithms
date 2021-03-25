/* 

11-Remove-Consecutive-Duplicates

For a given string(str), remove all the consecutive duplicate characters.
Example:
Input String: "aaaa"
Expected Output: "a"

Input String: "aabbbcc"
Expected Output: "abc"

 Input Format:
The first and only line of input contains a string without any leading and trailing spaces. All the characters in the string would be in lower case.

Output Format:
The only line of output prints the updated string.

Note:
You are not required to print anything. It has already been taken care of.

Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second

Sample Input 1:
aabccbaa

Sample Output 1:
abcba

Sample Input 2:
xxyyzxx

Sample Output 2:
xyzx

*/

#include <iostream>
using namespace std;

void removeConsecutiveDuplicates(char str[]){
	
	// run a loop i // in it compare i and i + 1// if they are equal then run an another loop to shift everything in right including the null character // run i till null
	
	for(int i = 0; str[i] != '\0'; i++){
		
		if(str[i] == str[i + 1]){
			int j = i + 1;
			for(; str[j] != '\0'; j++){			// we could have done with start = 0 if different then place it at start and increment start trick too
				
				str[j - 1] = str[j];
				
			}
			str[j - 1] = str[j]; 
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
		
		
		removeConsecutiveDuplicates(str);
		
		// print the char array
		
		for(int i = 0; str[i] != '\0'; i++){
			cout << str[i];
		}

//    }

}
