//instructions: ask the user to input 10 integers into an array. find and print the largest number.

//import packages or libraries
#include <iostream>
#include <string>
using namespace std;

//start of the logic/algorithm
int main() { //start of the logic/algorithm
	//initialize array of 10 integers
		int arr[10];
	cout << "Enter 10 integers into an array: ";
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	
	//find the largest numbers
	int largest = arr[0]; //assume first number is largest
	for (int i = 1; i < 10; i++) {
		if (arr[i] > largest) {
			largest = arr[i];
		}
	}
	
	cout << "The largest number is: " << largest << endl;
	
	return 0;
}