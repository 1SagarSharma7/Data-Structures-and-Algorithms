/* 

15-Compress-the-String

Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions.
Example:
If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".

The string is compressed only when the repeated character count is more than 1.
Note :
Consecutive count of every character in the input string is less than or equal to 9.

Input Format:
The first and only line of input contains a string without any leading and trailing spaces.

Output Format:
The only line of output prints the updated string.
Note:
You are not required to print anything. It has already been taken care of.

Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second

Sample Input 1:																	
aaabbccdsa

Sample Output 1:
a3b2c2dsa

Sample Input 2:
aaabbcddeeeee

Sample Output 2:
a3b2cd2e5

*/

#include <iostream>
using namespace std;


int ascii(int count){
	
	if(count == 0){
		return 48;
	}
	else if(count == 1){
		return 49;
	}
	else if(count == 2){
		return 50;
	}
	else if(count == 3){
		return 51;
	}
	else if(count == 4){
		return 52;
	}
	else if(count == 5){
		return 53;
	}
	else if(count == 6){
		return 54;
	}
	else if(count == 7){
		return 55;
	}
	else if(count == 8){
		return 56;
	}
	else if(count == 9){
		return 57;
	}
	
}

void compressTheString(char str[]){
	
	// by while count the recurring characters// if found any i have to just add i + 1 the count and count - 2 from the other character // i + 2 the increment rather than i++
	
	for(int i = 0; str[i] != '\0'; i++){		
		
		if(str[i] == str[i + 1]){			// check mark  // why would i unnecessaryly do all the calculations
			int j = i, count = 1;
			while(str[j] == str[j + 1]){
				count ++;
				j++;
			}
			j++;							// so that j points the non recuring character
			
			
			str[i + 1] = ascii(count);
			
//			cout << "count" << count;
			
			if(count > 2){							// there is no shifting till 2
				int shift = count - 2;
				for(; str[j] != '\0'; j++){
					str[j - shift] = str[j];		// found through observation // relation
				}
				str[j - shift] = str[j];			// for null
				
			}
			i++;					// cause if we dont nothing is goona happen crazy but it will try to compare the number to the characters of the string
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
		
		
		compressTheString(str);
		
		// print the char array
		
		for(int i = 0; str[i] != '\0'; i++){
			cout << str[i];
		}
		
	
}
//    }

