/*

10-Minimum-bracket-Reversal

For a given expression in the form of a string, find the minimum number of brackets that can be reversed in order to make the expression balanced. 
The expression will only contain curly brackets.
If the expression can't be balanced, return -1.

Example:
Expression: {{{{
If we reverse the second and the fourth opening brackets, the whole expression will get balanced. 
Since we have to reverse two brackets to make the expression balanced, the expected output will be 2.


Expression: {{{
In this example, even if we reverse the last opening bracket, we would be left with the first opening bracket and hence will not be able 
to make the expression balanced and the output will be -1.

Input Format :
The first and the only line of input contains a string expression, without any spaces in between.

Output Format :
The only line of output will print the number of reversals required to balance the whole expression. Prints -1, otherwise.
Note:
You don't have to print anything. It has already been taken care of.

Constraints:
0 <= N <= 10^6
Where N is the length of the expression.

Time Limit: 1sec

Sample Input 1:
{{{

Sample Output 1:
-1

Sample Input 2:
{{{{}}

Sample Output 2:
1

*/
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int countBracketReversals(string input){
	/*Add open parathensis to the stack// pop then if any closing parathesis // if the stadck is empty
    and a closing parathesis is encounter then just push it  for if the stack is not empty but at the top of the stack there is a
    closing paranthesis then too push it at the end compare if similar the count + 1 if both are different then coutn + 2*/
    
    // check if the string is a odd numbered string
    int size = 0;
    for(int i = 0; input[i] != '\0'; i++){
        size++;
    }
    if(size % 2 != 0){
        return -1;
    }
    
    // create a stack
    stack<char> stk1;
    
    // push open parenthesis into the stack // pop open parenthesis if any closing parenthensis
    
    for(int i = 0; input[i] != '\0'; i++){
        if(input[i] == '{'){
            stk1.push('{');
        }
        else{
        	if(stk1.empty()|| stk1.top() == '}'){
        		stk1.push('}');
			}
            else if(stk1.top() == '{'){
                stk1.pop();
            }
        }
    }
    
    int count = 0;
    
	// pop 2 at a time and do the count
    while(!stk1.empty()){
        char c1 = stk1.top();
        stk1.pop();
        char c2 = stk1.top();
        stk1.pop();
        if(c1 == c2){
            count = count + 1;
        }
        if(c1 != c2){
            count = count + 2;        
    }
}
    
    // return the count
    return count;
}


int main(){

	// create a character array
	string input;				// could have used string too
	
	// take input from the user
	cin >> input;
	
	// pass the character array
	int print = countBracketReversals(input);
	
	// print the returned value
	cout << print << endl;
	
}
