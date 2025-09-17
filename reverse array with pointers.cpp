#include <iostream>
using namespace std;

int main() {
	int arr[6];
	int *p;
	
	//input 6 integers
	cout << "Enter 6 integers: " << endl;
	for (p = arr; p < arr + 6; p++) {
		cin >> *p;
	}
	
	// print in reverse using only pointers
	cout << "Numbers in reverse order: " << endl;
	for (p = arr + 5; p >= arr; p--) {
		cout << *p << " ";
	}
	
	cout << endl;
	
	return 0;
	
}