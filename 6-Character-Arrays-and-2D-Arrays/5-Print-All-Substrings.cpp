/* 

5-Print-All-Substrings

For a given input string(str), write a function to print all the possible substrings.
Substring
A substring is a contiguous sequence of characters within a string. 
Example: "cod" is a substring of "coding". Whereas, "cdng" is not as the characters taken are not contiguous

Input Format:
The first and only line of input contains a string without any leading and trailing spaces. All the characters in the string would be in lower case.

Output Format:
Print the total number of substrings possible, where every substring is printed on a single line and hence the total number of output lines will be equal to the total number of substrings.
Note:
The order in which the substrings are printed, does not matter.

Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second

Sample Input 1:
abc

Sample Output 1:
a 
ab 
abc 
b 
bc 
c 

Sample Input 2:
co

Sample Output 2:
c 
co 
o

*/

#include <iostream>
using namespace std;

void printAllSubstrings(char str[]){
	
	// find the length of the array
	
	int len = 0;
	for(int i = 0; str[i] != '\0'; i++){
		len++;
	}
	
	// for loop to iterate at each letter till length
	
	for(int i = 0; i <= len - 1; i++){
		
		// inner loop to print the characters till length
		
		int x = 1;
		for(int j = i; str[j] != '\0';j++){		// 3 looops 1 for pointing the letters 1 for incrementing the numbers of letters to print and the last to print
			
			int y = x;
			for(int k = i; x--; k++){	// i so that it gets started from the desired letter
				cout << str[k];
			}
			cout << endl;			
			x = y + 1;				// so that it gets its previous value and also gets incremented by one
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
		
		
		printAllSubstrings(str);
		
		// print the char array
		
//		for(int i = 0; str[i] != '\0'; i++){
//			cout << str[i];
//		}

//    }

}
