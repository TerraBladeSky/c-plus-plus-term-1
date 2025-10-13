#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n;
	char choice;
	
	do {
	// start
	char array[10] = "banana"; // given string
	int len = strlen(array);
	int vowelCount = 0;
	
	// reverse the string
	cout << "Original: " << array << endl;
	cout << "Reversed: ";
	for (int i = len - 1; i >= 0; i--) {
		cout << array[i];
	}
	cout << endl;
	
	// count vowels
	for (int i = 0; i < len; i++) {
		char ch = array[i];
		if (ch == 'a' || ch == 'e' || ch == 'i'|| ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I'|| ch == 'O' || ch == 'U') {
			vowelCount++;
		}
	}
	cout << "Number of vowels: " << vowelCount << endl;
	
	// replace all 'a' with 'o'
	for (int i = 0; i < len; i++) {
		if (array[i] == 'a') {
			array[i] = 'o';
		}
	}
	cout << "After replacing 'a' with 'o': " << array << endl;
	
	// end
	
	cout << endl;
	
	// ask if user wants to repeat
	cout << "Do you want to enter another set of numbers? (y/n)" << endl;
	cin >> choice;
	
	} while (choice == 'y' || choice == 'Y'); //repeat until user chooses 'n'
	
	return 0;
	
}