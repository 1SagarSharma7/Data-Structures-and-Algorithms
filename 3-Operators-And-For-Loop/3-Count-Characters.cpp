/* 

3-Count-Characters

Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
Print count of characters, count of digits and count of white spaces respectively (separated by space).

Input Format :
A stream of characters terminated by '$'

Output Format :
3 integers i.e. count_of_characters count_of_digits count_of_whitespaces (separated by space)

Sample Input :
abc def4 5$

Sample Output :
6 2 2

Sample Output Explanation :
Number of characters : 6 (a, b, c, d, e, f)
Number of digits : 2 (4, 5)
Number of white spaces : 2 (one space after abc and one newline after 4)

*/

#include <iostream>
using namespace std;

int main(){

// create three varibales for letter , number and spaces

int a = 0, b = 0, c = 0;

// loop cin.get() and increment those variables accordingly by checking the ascii values

char ch;

for(;ch != '$';){						// have used for loop like while
	
	ch = cin.get();
	
	if(ch >= 97 && ch <= 123){			// a to z
		a++;
	}
	else if(ch >= 48 && ch <= 57){		// 0 - 9
		b++;
	}
	else if(ch == 13 || ch == 32 || ch == 9){  // 13 is the ascii value of enter 32 of space 9 of tab
		c++;									// if i dont know the ascii values i could have also add the char ' ' -> space '\t'-> tab '\n'-> newline
	}
}

// print it

cout << a << " " << b << " "  << c << " " << endl;

}









