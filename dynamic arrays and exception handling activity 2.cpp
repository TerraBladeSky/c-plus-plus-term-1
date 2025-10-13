#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	char choice;
	
	do {
	// step 1: ask how many students are in the class
	do {
		cout << "Enter Number of students: ";
		cin >> n;
		if (n <= 0) {
			cout << "Invalid input. Number of students must be greater than zero" << endl;
		}
	} while (n <= 0);
	
	
	// step 2: dynamically allocate an array to store grades
	double* grades = new double[n];
	
	// input grades from user
	cout << "Enter grades:" << endl;
	for (int i = 0; i < n; i++) {
		do {
			cin >> grades[i];
			if (grades[i] > 100 || grades[i] < 0) {
			cout << "Invalid grade. Please enter a grade between 0 and 100:" << endl;
			}
		} while (grades[i] > 100 || grades [i] < 0);
	}
	
	// step 3: calculate the class average
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += grades[i];
	}
	double average = sum / n;
	
	// display the class average
	cout << "Class average: " << average << endl;
	
	// free the dynamically allocaed memory
	delete[] grades;
	
	//ask if user wants to repeat
	cout << "Do you want to enter another set of numbers? (y/n)" << endl;
	cin >> choice;
	
	} while (choice == 'y' || choice == 'Y'); //repeat until user chooses 'n'
	
	return 0;
	
}