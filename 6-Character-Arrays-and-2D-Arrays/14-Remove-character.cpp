/* 

14-Remove-character

For a given a string(str) and a character X, write a function to remove all the occurrences of X from the given string.
The input string will remain unchanged if the given character(X) doesn't exist in the input string.

Input Format:
The first line of input contains a string without any leading and trailing spaces.

The second line of input contains a character(X) without any leading and trailing spaces.

Output Format:
The only line of output prints the updated string. 
Note:
You are not required to print anything explicitly. It has already been taken care of.

Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second

Sample Input 1:
aabccbaa
a

Sample Output 1:
bccb

Sample Input 2:
xxyyzxx
y

Sample Output 2:
xxzxx

*/

#include <iostream>
using namespace std;


void removeCharacter(char str[]){
	
	// take the character that has to be removed
	
	char x;
	cin >> x;
	
	// interate the entire loop to find the character
	
	for(int i = 0; str[i] != '\0'; i++){
		
	
		if(str[i] == x){
			
	// if any found then shift all the characters in front of the found character // always include  the null
			
			int j = i + 1;
			for(; str[j] != '\0'; j++){
				
				str[j - 1] = str[j];
				
			}
			
			str[j - 1] = str[j];	// for null 
			i--;					// in case of double removal recurring numbers
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
		
		
		removeCharacter(str);
		
		// print the char array
		
		for(int i = 0; str[i] != '\0'; i++){
			cout << str[i];
		}
		
	
}
//    }

