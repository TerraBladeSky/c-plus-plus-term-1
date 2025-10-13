#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	char choice;
	do {
	//declare variables for the two numbers
	double numerator , denominator;
	
	// ask user for two numbers
	cout << "Enter numerator: ";
	cin >> numerator;
	
	cout << "Enter denominator: ";
	cin >> denominator;
	
	// exception handling for division by zero
	try {
		// check is denominator is zero
		if (denominator == 0) {
			// throw an exception if division by zero is detected
			throw string("Division by zero!");
		}
		
		//perform the division if denominator is not zero
		double result = numerator / denominator;
		cout << "Result: " << result << endl;
	}
	//catch block - handle the exception
	catch (const string& error) {
		//display the error message
		cout << "Error: " << error << endl;
	}
	
	//ask if user wants to repeat
	cout << "Do you want to enter another set of numbers? (y/n)" << endl;
	cin >> choice;
	
	} while (choice == 'y' || choice == 'Y'); //repeat until user chooses 'n'
	
	return 0;
	
}