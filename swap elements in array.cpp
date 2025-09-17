#include <iostream>
using namespace std;

int main() {
	int arr[8];
	
	// input 8 numbers
	cout << " enter 8 integers: ";
	for (int i = 0; i < 8; i++) {
		cin >> *(arr + i);
	}
	
	// swap first with last, second with second to last, etc
	for (int i = 0; i < 4; i++) {
		int temp = *(arr + i);
		*(arr + i) = *(arr + (7 - i));
		*(arr + (7 - i)) = temp;
	}
	
	// show result
	cout << "Swapped array: ";
	for (int i = 0; i < 8; i++) {
		cout << *(arr + i) << " ";
	}
	
	cout << endl;
	
	return 0;
	
}