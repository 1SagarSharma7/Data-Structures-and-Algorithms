#include <iostream>
using namespace std;

void functionName(parameters){
	
	
	
}


// Driver Code
int main(){
	
	// test cases
	int t;
	cin >> t;
	while(t--){
			
		// Take the size of the array from the user
		
		int arr[100];
		int size;
		cin >> size;
		
		// Also take the input using a loop
		
		for(int i = 0; i < size; i++){
			cin >> arr[i];
		}
		
		// Function 
		
		
		functionName(parameters);
		
		// print the array
		
		for(int i = 0; i < size; i++){
			cout << arr[i] << " ";
		}
    }

}
