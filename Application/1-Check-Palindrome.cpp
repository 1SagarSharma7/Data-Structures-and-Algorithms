/* 

1-Check-Palindrome

Given a string, determine if it is a palindrome, considering only alphanumeric characters.
Palindrome
A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and forwards.

Example:
If the input string happens to be, "malayalam" then as we see that this word can be read the same as forward and backwards, it is said to be a valid palindrome.

The expected output for this example will print, 'true'.
From that being said, you are required to return a boolean value from the function that has been asked to implement.

Input Format:
The first and only line of input contains a string without any leading and trailing spaces. All the characters in the string would be in lower case.

Output Format:
The only line of output prints either 'true' or 'false'.

Note:
You are not required to print anything. It has already been taken care of.

Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second

Sample Input 1 :
abcdcba

Sample Output 1 :
true 

Sample Input 2:
coding

Sample Output 2:
false

*/

#include <iostream>
using namespace std;

void checkPalindrome(char str[]){
	
	// create a loop to find the length of the char array // store it in a variable
	
	int len = 0;
	for(int i = 0; str[i] != '\0'; i++){
		len++;
	}
//	cout << len;
	
	// while loop till i < j and also have a boolean with true if it completes the loop cout << true or else break and cout << false
	
	int i = 0;
	bool flag = true;
	while(i <= len / 2){				// 8 is 4 and 7 is 3 so it commpares exactly what has to be compared
		if(str[i] == str[len - i - 1]){
			
		}
		else{
			flag = false;
			break;
		}
		i++;
	}
	
	if(flag){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
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
		
		
		checkPalindrome(str);
		
		// print the array
		
//		for(int i = 0; i < size; i++){
//			cout << arr[i] << " ";
//		}

//    }

}
