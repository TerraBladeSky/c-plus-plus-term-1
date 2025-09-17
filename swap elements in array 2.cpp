#include <iostream>
using namespace std;

int main() {
	int arr[8];
	
	// input 8 numbers
	cout << " enter 8 integers: ";
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}
	
	cout << "original array: ";
	for (int i = 0; i < 8; i++) {
		cout << arr[i] << " ";
	}
	
	cout << endl;
	
	// pointers for 3rd and 6th element
	int *left = &arr[2]; // 3rd element (index 2)
	int *right = &arr[5]; // 6th element (index 5)
	
	// reverse elements from 3rd to 6th
	while (left < right) {
		int temp = *left;
		*left = *right;
		*right = temp;
		
		left++;
		right--;
	}
	
	cout << "After reversing part (3rd to 6th element): ";
	for (int i = 0; i < 8; i++) {
		cout << arr[i] << " ";
	}
	
	cout << endl;
	
	return 0;
	
}