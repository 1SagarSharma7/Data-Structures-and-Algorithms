/*

16-String-to-Integer

Write a recursive function to convert a given string into the number it represents. That is input will be a numeric 
string that contains only numbers, you need to convert the string into corresponding integer and return the answer.

Input format :
Numeric string S (string, Eg. "1234")

Output format :
Corresponding integer N (int, Eg. 1234)

Constraints :
0 <= |S| <= 9

where |S| represents length of string S.

Sample Input 1 :
00001231

Sample Output 1 :
1231

Sample Input 2 :
12567

Sample Output 2 :
12567

*/

#include <iostream>
using namespace std;

int stringToIntegerHelper(char str[], int n){
	
	// base case // same till null 
	
	if(n == 0){
		return str[n] - '0';		// gives the value of the integer 
	}
	
	// scal case
	// recur case
	
	return str[n] - '0' + (stringToIntegerHelper(str, n - 1) * 10);
	
}

int stringToInteger(char str[]){
	
	int count = 0;
	for(int i = 0; str[i] != '\0'; i++){
		count++;
	}
	stringToIntegerHelper(str , count - 1);		// cause it comes in 0 - n format of array
}

int main(){
	
	// take a string 
	char str[100];
	cin >> str;	

	// call the function and cout
	cout << stringToInteger(str);
}
