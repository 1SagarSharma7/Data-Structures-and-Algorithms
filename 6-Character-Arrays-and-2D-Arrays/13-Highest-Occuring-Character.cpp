/* 

13-Highest-Occuring-Character

For a given a string(str), find and return the highest occurring character.
Example:
Input String: "abcdeapapqarr"
Expected Output: 'a'
Since 'a' has appeared four times in the string which happens to be the highest frequency character, the answer would be 'a'.
If there are two characters in the input string with the same frequency, return the character which comes first.

Consider:
Assume all the characters in the given string to be in lowercase always.

Input Format:
The first and only line of input contains a string without any leading and trailing spaces.

Output Format:
The only line of output prints the updated string. 
Note:
You are not required to print anything explicitly. It has already been taken care of.

Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second

Sample Input 1:
abdefgbabfba

Sample Output 1:
b

Sample Input 2:
xy

Sample Output 2:
x

*/

#include <iostream>
using namespace std;

void highestOccuringCharacter(char str[]){
	
	// create a character array of size 150
	
	int str2[150] = {0};  //  setting the first character with zero and rest are itself initialize by zero
	
		// print the char array
		
//		for(int i = 0; i < 150; i++){
//			cout << str2[i];
//		}
	

	
	// iterate the given character arrray and increment in the new character array
	
	for(int i = 0; str[i] != '\0'; i++){
		str2[str[i]]++;
	}
	
	// compare according to them 
	
	int max = str2[97];
	char maxChar = 'a';
	for(int j = 97; j <= 123; j++){		// 97
		if(str2[j] > max){
			max = str2[j];
			maxChar = j;
		}
	}
	
	// print accordingly

	cout << maxChar;
	
	/* 
	
	Alternative Method
	
	int arr[26] = {0};
	
	for(int i = 0; i <= n; i++){
			arr[int(input[i]) - 'a'] += 1;
		}
	}
	
	// then later we can check for the highest and figure out the character 
	
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
		
		
		highestOccuringCharacter(str);
		
	
}
//    }

