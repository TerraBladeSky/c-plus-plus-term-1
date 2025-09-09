//instructions: write a program that accepts 10 integers into an array, then creates a 2nd array-
//-where each element is running sum of the number so far and prints all 2 arrays side by side

//import packages or libraries
#include <iostream>
#include <string>
using namespace std;

//start of the logic/algorithm
int main() { //start of the logic/algorithm
	int numbers[10];
	int runningSum[10];
	
	//step 1: accept 10 integers into an array
	cout << "Enter 10 numbers: ";
	for (int i = 0; i < 10; i++) {
		cin >> numbers[i];
	}
	
	//step 2: create running sum array
	runningSum[0] = numbers[0]; //fitst element is the same
		for (int i = 0; i < 10; i++) {
		runningSum[i] = runningSum[i-1] + numbers[i];
	}
	
	//step 3: print original numbers
	cout << "\nOriginal:    ";
	for (int i = 0; i < 10; i++) {
		cout << numbers[i] << " ";
	}
	
	//step 4: print number sums
	cout << "\nRunningSum:    ";
	for (int i = 0; i < 10; i++) {
		cout << runningSum[i] << " ";
	}
	
	cout << endl;
	
	return 0;
}