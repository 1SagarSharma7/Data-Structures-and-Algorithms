#include <iostream>
using namespace std;

int main(){
	int count = 0;
for(int i = 22; i < 91; i++){
	if(i % 11 == 0){
		count ++;
	}
}
cout << count << endl;
}
