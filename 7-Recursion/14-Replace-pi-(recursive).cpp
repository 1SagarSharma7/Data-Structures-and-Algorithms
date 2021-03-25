/*

14-Replace-pi-(recursive)

Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

Sample Input 1 :
xpix

Sample Output :
x3.14x

Sample Input 2 :
pipi

Sample Output :
3.143.14

Sample Input 3 :
pip

Sample Output :
3.14p

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


void replacePi(char str[]){
	
	// base case
	if(str[0] == '\0'){
		return;
	}
	
	// recur case
	replacePi(str + 1);
	
	// scal case
	
	if(str[0] == 'p' && str[1] == 'i'){
		// 01234
		// xpix0				// dry run
		//	0123
		//len 3
		// x3.14x0
		//  012345
		int len = stringLength(str);
		str[len - 1 + 3] = str[len - 1 + 1]; 		// shifting the null character twice
		for(int i = len - 1; i >= 2 ; i--){
			str[i + 2] = str[i];		// shifting the rest of  the characters
		}
		str[0] = '3';
		str[1] = '.';		// placing the value 3.14 in the place of the pi
		str[2] = '1';
		str[3] = '4';
	}
	return;
	
}


int main(){
	
	// creating and taking input in the string
	char str[100];
	cin >> str;
	
	// calling the recursive function
	replacePi(str);
	
	// print the string
	cout << str;
	
}
