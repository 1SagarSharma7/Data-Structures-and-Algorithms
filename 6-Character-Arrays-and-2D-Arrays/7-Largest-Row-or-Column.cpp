/* 

7-Largest-Row-or-Column

For a given two-dimensional integer array/list of size (N x M), you need to find out which row or column has the 
largest sum(sum of all the elements in a row/column) amongst all the rows and columns.

Note :
If there are more than one rows/columns with maximum sum, consider the row/column that comes first. And if ith row and jth column has the same largest sum, 
consider the ith row as answer.

Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains two integer values, 'N' and 'M', separated by a single space. They represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.

Second line onwards, the next 'N' lines or rows represent the ith row values.

Each of the ith row constitutes 'M' column values separated by a single space.

Output Format :
For each test case, If row sum is maximum, then print: "row" <row_index> <row_sum>
OR
If column sum is maximum, then print: "column" <col_index> <col_sum>
It will be printed in a single line separated by a single space between each piece of information.

Output for every test case will be printed in a seperate line.
 Consider :
If there doesn't exist a sum at all then print "row 0 -2147483648", where -2147483648 or -2^31 is the smallest value for the range of Integer.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
0 <= M <= 10^3
Time Limit: 1sec

Sample Input 1 :
1
2 2 
1 1 
1 1

Sample Output 1 :
row 0 2

Sample Input 2 :
2
3 3
3 6 9 
1 4 7 
2 8 9
4 2
1 2
90 100
3 40
-10 200

Sample Output 2 :
column 2 25
column 1 342

*/

#include <iostream>
using namespace std;

void largestRowOrColumn(int arr[][100],int rows, int cols){
			
			
	// figure out the largest column sum		
	int colsum1 = 0;
	int colsum2 = 0;
	int colnum1 = 0;			
	for(int col = 0; col < cols; col++){			
		for(int row = 0; row < rows; row++){
			colsum2 += arr[row][col];
		}
		
		if(colsum2 > colsum1){           // reseting the value of sum for the next column
			colsum1 = colsum2;
			colnum1 = col;				
		}
		
		colsum2 = 0;
	}
	
	// figure out the largest row sum
	int rowsum1 = 0;
	int rowsum2 = 0;
	int rownum1 = 0;			
	for(int row = 0; row < rows; row++){			
		for(int col = 0; col < cols; col++){
			rowsum2 += arr[row][col];
		}
		
		if(rowsum2 > rowsum1){           // reseting the value of sum for the next column
			rowsum1 = rowsum2;
			rownum1 = row;				
		}
		
		rowsum2 = 0;
	}
	
	if(rowsum1 >= colsum1){				// i have just found largest sum of both the rows as well as columns and compared them 
		cout << "row" << ' ' << rownum1 << ' ' << rowsum1 << endl;
	}
	else{
		cout << "column" << ' ' << colnum1 << ' ' << colsum1 << endl;
	}
}
// Driver Code
int main(){
	
	// test cases
	int t;
	cin >> t;
	while(t--){
			
		// Take the size of the array from the user
		
		int arr[100][100];
//		cin >> str;
		
		int rows, cols;
		cin >> rows >> cols;
		
		// Also take the input using a loop

		for(int row = 0; row < rows; row++){
			for(int col = 0; col < cols; col++){
				cin >> arr[row][col];
			}
		}
		
		// Function 
		
		
		largestRowOrColumn(arr, rows, cols);
		
		// print the char array
		
//		for(int i = 0; str[i] != '\0'; i++){
//			cout << str[i];
//		}

    }

}
