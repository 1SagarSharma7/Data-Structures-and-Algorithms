#include <iostream>
using namespace std;

int main(){
	
	// test cases
	int t;
	cin >> t;
	while(t--){
			
		// Take the size of the array from the user
		
		int arr[100];
		int n;
		cin >> n;
		
		// Also take the input using a loop
		
		for(int i = 0; i < n; i++){
			int c;
			cin >> c;
			arr[i] = c;
		}
		
		// print the array
		
		for(int i = 0; i < n; i++){
			cout << arr[i] << " ";
		}
    }

}
