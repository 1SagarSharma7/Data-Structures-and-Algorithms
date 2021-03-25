/*

17-Pair-Star

Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated 
from each other by a "*".

Input format :
String S

Output format :
Modified string

Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.

Sample Input 1 :
hello

Sample Output 1:
hel*lo

Sample Input 2 :
aaaa

Sample Output 2 :
a*a*a*a

*/

#include <iostream>
using namespace std;

int stringLength(char str[]){
	
	int count = 0;
	for(int i = 0; str[i] != '\0'; i++){	
		
		count++;
		
	}
	return count;
}


void pairStar(char str[]){
	
	// base case
	if(str[0] == '\0'){
		return;
	}
	
	// recur case
	pairStar(str + 1);
	
	// scal case
	
	if(str[0] == str[1]){
		
		int len = stringLength(str);
		
		// null character
		str[len - 1 + 3] = str[len - 1 + 1]; 
		
		// other character
		for(int i = len - 1; i >= 1 ; i--){
			str[i + 1] = str[i];		
		}
		str[1] = '*';
	}
	
}

int main(){
	
	// take a string
	char str[100];
	cin >> str;
	
	// call the recursive function
	pairStar(str);
	
	// print the string 
	cout << str;
		
}
