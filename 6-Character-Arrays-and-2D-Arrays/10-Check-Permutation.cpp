/* 

10-Check-Permutation

For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
Permutations of each other
Two strings are said to be a permutation of each other when either of the string's characters can be rearranged so that it becomes identical to the other one.

Example: 
str1= "sinrtg" 
str2 = "string"

The character of the first string(str1) can be rearranged to form str2 and hence we can say that the given strings are a permutation of each other.

Input Format:
The first line of input contains a string without any leading and trailing spaces, representing the first string 'str1'.

The second line of input contains a string without any leading and trailing spaces, representing the second string 'str2'.
Note:
All the characters in the input strings would be in lower case.

Output Format:
The only line of output prints either 'true' or 'false', denoting whether the two strings are a permutation of each other or not.

You are not required to print anything. It has already been taken care of. Just implement the function. 

Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second

Sample Input 1:
abcde
baedc

Sample Output 1:
true

Sample Input 2:
abc
cbd

Sample Output 2:
false

*/

#include <iostream>
using namespace std;

void checkPermutation(char str[]){
	
	char str2[100];
	cin >> str2;
	
	// check if the size of two strings are equal are not if equal let it pass // if not cout << false << endl; // return 
	// 2 loops 1 for str and the other for str2
	
	for(int i = 0; str[i] != '\0'; i++){
		for(int j = 0; str2[j] != '\0'; j++){
	// rewrite it with '1' 
			if(str[i] == str2[j]){
				str2[j] = 1;
				break;
			}
		}
	}
	
	// loop it again to check if any element is not 1
	
	for(int i = 0; str2[i] != '\0'; i++){
		
	// if everything is 1 print true if not print false
		if(str2[i] != 1){
			cout << "false" << endl;
			return;
		}
		
	}
	
	cout << "true" << endl;
	return;

/* 

Alternative Method

create a array of 256 character and initalize it with zero
iterate over the first character array and increament +1 if the character occurs
iterate over the second characer array and decrement -1 if the character occurs
loop and check that if any character is not zero if its not then false its not a palindrome and then return or else true its a palindrome

*/

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
		
			
		checkPermutation(str);
		
		// print the char array
		
//		for(int i = 0; str[i] != '\0'; i++){
//			cout << str[i];
//		}

//    }

}
