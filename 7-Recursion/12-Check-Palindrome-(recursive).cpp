/*

12-Check-Palindrome-(recursive)

Check whether a given String S is a palindrome using recursion. Return true or false.

Input Format :
String S

Output Format :
'true' or 'false'

Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.

Sample Input 1 :
racecar

Sample Output 1:
true

Sample Input 2 :
ninja

Sample Output 2:
false

*/

#include <iostream>
#include <string>
using namespace std;

	// helper function
bool check_palindrome(char c[], int n) 
{
	//base case
    if(n < 2)
    {
        return true;
    }

	// scal case
    if(c[0] != c[n - 1])
    {
        return false;
    }

	// recur case
    return check_palindrome(c + 1, n - 2);		// -2 cause 1 from start and the other from the end
}

bool checkPalindrome(char c[]) 
{
    int n = 0;
    for(int i = 0; c[i] != '\0'; i++)
    {
        n++;
    }

    return check_palindrome(c, n);
}


int main(){
	
	// taking a string
	char str[100];
	
	//taking input for the string
	cin >> str;
	
	if(checkPalindrome(str)){
		
		cout << "True" << endl;
		
	}
	else{
		
		cout << "False" << endl;
		
	}
	
}
