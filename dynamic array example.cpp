#include <iostream>
#include <string>
using namespace std;

int main() {
	// dynamic arrays eg
	int size;
	
	cout << "Enter number of students: ";
	
	cin >> size;
	
	int* scores = new int[size]; // dynamic array
	
	cout << "Enter " << size << " scores: " << endl;
	
	for (int i = 0; i < size; i++) {
		cin >> scores[i];
	} // accepting values
	
	cout << "Scores entered: " << endl;
	
	for(int i = 0; i < size; i++) {
		cout << scores[i] << " ";
	}
	
	cout << endl;
	
	delete[] scores; // free the memory
	
	return 0;
	
}