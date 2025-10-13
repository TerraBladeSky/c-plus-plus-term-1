#include <iostream>
#include <string>
#include <stdexcept>
#include <limits>
#include <cctype>
using namespace std;

int main() {
    string fullName, firstName, lastName;
    string studentID;
    char choice;

    do {
        try {
            // Step 1: Ask for full name
            cout << "Enter full name (e.g. Juan Dela Cruz): ";
            getline(cin, fullName);

            // Validation: full name must not be empty
            if (fullName.empty()) {
                throw invalid_argument("Full name must not be empty.");
            }

            // Extract first and last name
            size_t spacePos = fullName.find(' ');
            if (spacePos == string::npos) {
                throw invalid_argument("Please enter both first and last name.");
            }

            firstName = fullName.substr(0, spacePos);
            lastName = fullName.substr(fullName.find_last_of(' ') + 1);

            // Step 2: Ask for student ID using getline
            cout << "Enter 9-digit student ID: ";
            getline(cin, studentID);

            // Validation: student ID must not be empty
            if (studentID.empty()) {
                throw invalid_argument("Student ID must not be empty.");
            }

            // Validation: student ID must be exactly 9 digits
            if (studentID.length() != 9) {
                throw invalid_argument("Student ID must be exactly 9 digits.");
            }

            // Validation: student ID must contain only digits
            for (char c : studentID) {
                if (!isdigit(c)) {
                    throw invalid_argument("Student ID must contain only digits.");
                }
            }

            // Step 3: Create username
            string username = firstName.substr(0, 3);
            for (auto &c : username) c = tolower(c); // lowercase first name part

            username += lastName; // append last name
            username += studentID.substr(studentID.length() - 2); // last 2 digits

            cout << "\nGenerated Username: " << username << endl;
        }
        catch (const invalid_argument &e) {
            cerr << "Error: " << e.what() << endl;
        }
        catch (...) {
            cerr << "An unexpected error occurred." << endl;
        }

        cout << "\nWould you like to try again? (Y/N): ";
        cin >> choice;

        // Clear the input buffer including the newline character
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (choice == 'Y' || choice == 'y');

    cout << "\nProgram exited. Goodbye!" << endl;
    return 0;
}