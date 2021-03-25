/* 

12-Reverse-Each-Word

Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to print 
the sentence such that each word in the sentence is reversed.
Example:
Input Sentence: "Hello, I am Aadil!"
The expected output will print, ",olleH I ma !lidaA".

Input Format:
The first and only line of input contains a string without any leading and trailing spaces. The input string represents the sentence given to Aadil.

Output Format:
The only line of output prints the sentence(string) such that each word in the sentence is reversed. 

Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second

Sample Input 1:
Welcome to Coding Ninjas

Sample Output 1:
emocleW ot gnidoC sajniN

Sample Input 2:
Always indent your code

Sample Output 2:
syawlA tnedni ruoy edoc

*/

#include <iostream>
using namespace std;

void reverseEachWord(char str[]){
	
	char str2[100];
	int k = 0;
	
	// iterate from start // stop at spaces // print back to the new string // iterate till str[i] != '\0
	
	int i = 0;
	for(; str[i] != '\0'; i++){
	
		if(str[i] == 32){
			
			for(int j = i - 1; j >= 0 && str[j] != 32; j--){
				
				str2[k] = str[j];
				k++;
			}
			
			str2[k] = ' ';
			k++;
			
		}
		
	}
	
	for(int j = i - 1; j >= 0 && str[j] != 32; j--){
				
				str2[k] = str[j];
				k++;
			}
	
		str2[k] = str[i];
	
	
	
	// 1st till i = 0 and then till spaces
	
	// copy it back to the original string 
	
	int x = 0;
	for(; str2[x] != '\0'; x++){
		str[x] = str2[x];
	}
	str[x] = str2[x];
	
	
	/* 
	
	Alternative Method
	
	find for space or null character// mark the start and stop accordingly leaving the space (no need of extra array)
	swap from start to stop // repeat till null end done
	
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
		cin.getline(str, 100);
		
		// Also take the input using a loop

//		for(int i = 0; i < size; i++){
//			cin >> arr[i];
//		}
		
		// Function 
		
		
		reverseEachWord(str);
		
		// print the char array
		
		for(int i = 0; str[i] != '\0'; i++){
			cout << str[i];
		}

//    }

}
