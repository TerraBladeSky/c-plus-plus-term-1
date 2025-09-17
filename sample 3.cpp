#include <iostream>
#include <string>
using namespace std;

int main() {
	int arr[3] {10, 20, 30};
	int* p = arr; // arr is the pointer to the first element
	
	cout << "arr[0] = " << arr[0] << endl;
	cout << "*p = " << *p << endl;
	
	cout << "arr[1] = " << arr[1] << endl;
	cout << "*(p+1) = " << *(p+1) << endl;
	
	cout << endl;
	
	return 0;
	
}