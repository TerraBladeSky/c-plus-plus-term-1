#include <iostream>
using namespace std;

int main() {
	int arr[5];
	int *ptr;
	int sum = 0;
		
	//input values
	cout << "Enter 5 integers into an array: " << endl;
	for (ptr = arr; ptr < arr + 5; ptr++) {
		cin >> *ptr;
	}
	
	//print array elements
	cout << "Array elements are: " << endl;
	for (ptr = arr; ptr < arr + 5; ptr++) {
		cout << *ptr << " ";
	}
	
	// find sum using pointers
	for (ptr = arr; ptr < arr + 5; ptr++) {
		sum += *ptr;
	}
	
	//output
	cout << "Sum of elements is: " << sum << endl;
	
	cout << endl;
	
	return 0;
	
}