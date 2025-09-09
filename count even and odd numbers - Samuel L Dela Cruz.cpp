//instructions: write a program that accepts 15 integers into an array, then count- 
//-how many are even and how many are odd, then print the results

//import packages or libraries
#include <iostream>
#include <string>
using namespace std;

//start of the logic/algorithm
int main() { //start of the logic/algorithm
	const int SIZE = 15;
	int numbers[SIZE];
	int evenCount = 0;
	int oddCount = 0;
	
	//step 1: accept 15 integers into an array
	cout << "Please Enter 15 numbers" << endl;
	for (int i = 0; i < 15; i++) {
		cout << "Enter number " << (i + 1) << ": ";
		cin >> numbers[i];
		
		//check if the number is even or odd
		if (numbers[i] % 2 == 0) {
			evenCount++;
		} else {
			oddCount++;
		}
	}
	
	//step 2: display the results
	cout << "\n--- Results ---" << endl;
	cout << "Numbers entered: ";
	for (int i = 0; i < 15; i++) {
		cout << numbers[i];
		if (i < SIZE - 1) {
			cout << ", ";
		}
	}
	
	cout << endl;
	
	cout << "Even Numbers: " << evenCount << endl;
	cout << "Odd Numbers: " << oddCount << endl;
	
	return 0;
}