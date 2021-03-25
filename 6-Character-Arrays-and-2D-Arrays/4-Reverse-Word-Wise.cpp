/* 

4-Reverse-Word-Wise

Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on.
 Individual words should remain as it is.

Input format :
String in a single line

Output format :
Word wise reversed string in a single line

Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.

Sample Input 1:
Welcome to Coding Ninjas

Sample Output 1:
Ninjas Coding to Welcome

Sample Input 2:
Always indent your code

Sample Output 2:
code your indent Always

*/

#include <iostream>
using namespace std;



void reverseWordWise(char str[]){
	
	// create a loop to find the length of the char array // store it in a variable
	
	int len = 0;
	for(int i = 0; str[i] != '\0'; i++){
		len++;
	}
	
//	cout << str[len - 1];
	
	// create a another character array
	
	char str1[100] = {0};
	int k = 0;
	
	// interate from last // then go forward searching for null or space and copy till it in the another array
	
	for(int i = len - 1; i >= 0; i--){
		if(str[i] == 32){
//				cout << "we have entered the inner loop ";
			for(int j = i + 1; str[j] != 32 && str[j] != '\0'; j++){
				str1[k] = str[j];
				k++;
//				cout << k << endl;
			}
			str1[k] = ' ';
			k++;
//			cout << "k1" << k;
		}	
		else if(i == 0){
			for(int j = i; str[j] != 32 && str[j] != '\0'; j++){
				str1[k] = str[j];
				k++;
			}
			str1[k] = '\0';
//			cout << "k2" << k;
		}
	}
	
	/* 
	Dry Run
	11 
	
	
	*/
	
	// copy the second character to the first // end the program
	
	for(int x = 0; x < len + 1; x++){
		
		str[x] = str1[x];
		
	}
		
		// print the char array
		
		for(int i = 0; str[i] != '\0'; i++){
			cout << str[i];
		}
		
		
		/* 
		
		Alernative Method 
		reversing twice 
		eg: Sagar Sharma
			ragaS amrahS	// word wise reverse
			Sharma Sagar	// whole char reverse
		
		CODE
		
		void reverse(char input[], int start, int end)
		{ 
			while(start < end)
			{
				std::swap(input[start++], input[end--];
			}
		}
		
		void reverseStringWordWise(char input[]){
			int previousSpaceIndex = -1;
			int i = 0;
			for(; input[i] != '\0'; i++){
				if(input[i] == ' ')
				{
					reverse(input, previousSpaceIndex + 1, i + 1);
					previousSpaceIndex = i;
				}
			}
			
			reverse (input , previousSpaceIndex + 1, i -1);
			reverse (input , 0, i - 1);
		}
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
		
		
		reverseWordWise(str);

//    }
}

