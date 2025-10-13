#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	char choice;
	
	do {
	// step 1: ask user how many integers they want to store
	do {
		cout << "Enter number of elements: ";
		cin >> n;
		if (n <= 0) {
			cout << "Please enter a positive number." << endl;
		}
	} while (n <= 0);
	
	// step 2: dynamically allocate an array of that size
	int* arr = new int[n];
	
	// step 3: let user input numbers
	cout << "Enter " << n << " numbers:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	// display the numbers back to the user
	cout << "You entered: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	
	cout << endl;
	
	// free the dynamically allocaed memory
	delete[] arr;
	
	//ask if user wants to repeat
	cout << "Do you want to enter another set of numbers? (y/n)" << endl;
	cin >> choice;
	
	} while (choice == 'y' || choice == 'Y'); //repeat until user chooses 'n'
	
	return 0;
	
}