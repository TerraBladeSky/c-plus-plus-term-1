#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	char choice;
	
	do {
	//starter
	
	//end
	
	cout << endl;
	
	//ask if user wants to repeat
	cout << "Do you want to enter another set of numbers? (y/n)" << endl;
	cin >> choice;
	
	} while (choice == 'y' || choice == 'Y'); //repeat until user chooses 'n'
	
	return 0;
	
}