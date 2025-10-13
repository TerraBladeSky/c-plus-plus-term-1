#include <iostream>
#include <string>
using namespace std;

// custom exception class for password errors
class PasswordException {
	private:
		string message; //store the error message
	public:
		// constructor to initialize the exception with a message
		PasswordException(string msg) : message(msg) {}
		
		// method to retrieve the error message
		string what() { return message; }
};

int main() {
	char choice;
	
	do {
	// hardcode the correct password
	const string CORRECT_PASSWORD = "mapua123";
	string password;
	
	try {
		// prompt user for password
		cout << "Enter password: ";
		cin >> password;
		
		//check if password is incorrect
		if (password != CORRECT_PASSWORD) {
			// throw an exception if password is wrong
			throw PasswordException("Invalid Password!");
		}
		
		//print success message if password is correct
		cout << "Access granted." << endl;
		
	} catch (PasswordException& e) {
		//catch the exception and display the error message
		cout << "Error: " << e.what() << endl;
	}
	
	
	//ask if user wants to repeat
	cout << "Do you want to enter another set of numbers? (y/n)" << endl;
	cin >> choice;
	
	} while (choice == 'y' || choice == 'Y'); //repeat until user chooses 'n'
	
	return 0;
	
}