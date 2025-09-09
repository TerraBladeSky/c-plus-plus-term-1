//instructions: 

//import packages or libraries
#include <iostream>
#include <string>
using namespace std;

//start of the logic/algorithm
int main() { //start of the logic/algorithm
	// initialize array of integers
		int arr[5];
	cout << "Enter 5 numbers: ";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	
	cout << "Numbers in reverse: ";
	for (int i = 4; i >=0; i--) {
		cout << arr[i] << " ";
	}
	
	return 0;
}