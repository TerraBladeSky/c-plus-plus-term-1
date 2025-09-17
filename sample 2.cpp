#include <iostream>
#include <string>
using namespace std;

int main() {
	//array of 5 integers
	int arr[5] = {10, 20, 30, 40, 50};
	cout << arr; //print address of arr[0]
	cout << endl;
	cout << *arr; //print 10 (value of arr[0])
	cout << endl;
	cout << *(arr + 2); //print 30 (value of arr[2])
	
	cout << endl;
	
	return 0;
	
}