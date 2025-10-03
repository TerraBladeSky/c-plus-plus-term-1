#include <iostream>
#include <string>
using namespace std;

int main() {
    //errors
    //debugging
    // 1. print debugging
    int x = 10;
    int y = 0;
    cout << "Before division" << endl; //debug output
    int z = x / y; // crashes
    cout << "After division" << endl;

    // 2. check variable values
    int x = 10;
    int y = 5;
    int result = x - y;
    cout << "Result: " << result << endl; // result: 5

    // 3. use a debugger tool
    /*
    IDEs like Visual Studio, Code::Blocks, and VS Code have 
    debuggers that let you:

    Pause your program (breakpoints)
    Step through code line by line
    Watch variables and find unexpected values

    Tip: Start with "1. Print Debugging". Use IDE tools as you get 
    more comfortable.
    */
   
    // 4. learn from error messages

    // exception handling
    //try and catch
    try {
        //code that may throw an exception
        throw 550;
    }
    catch (int errorCode) {
        cout << "Error occurred: " << errorCode;
    }

    //real life eg
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted - you are old enough";
        } else {
            throw (age);
        }
    }
    catch (int myNum) {
        cout << "access denied - you must be at least 18 years old" << endl;
        cout << "age is: " << myNum;
    }

    //real life eg
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted - you are old enough";
        } else {
            throw 505;
        }
    }
    catch (int myNum) {
        cout << "access denied - you must be at least 18 years old" << endl;
        cout << "age is: " << myNum;
    }

    //handle any type of exceptions
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted - you are old enough";
        } else {
            throw 505;
        }
    }
    catch (...) {
        cout << "access denied - you must be at least 18 years old" << endl;
    }

    //input validation
    //validate integer input
    int number;
    cout << "Enter a number: ";
    while (!(cin >> number)) { // keep asking until the user enters a valid number
        cout << "Invalid input. Try again: ";
        cin.clear(); // reset input errors
        cin.ignore(10000, '\n') // remove bad input
    }
    cout << "you entered: " << number;

    /* expected result
    Enter a number: f
    Invalid input. Try again: 3
    You entered: 3
    */

    //validate number range
    int number;
    do {
        cout << "Choose a number between 1 and 5";
        cin >> number;
    } while (number < 1 || number> 5); // keep asking until the user enters a number between 1 and 5

    cout << "you choose: " << number;

    /*Example Result:
    Choose a number between 1 and 5: 8
    Choose a number between 1 and 5: -2
    Choose a number between 1 and 5: 4
    You chose: 4 */

    //validate text input
    string name;
    do {
        cout << "Enter your name: ";
        getline(cin, name);
    } while (name.empty()); //keep asking until the user enters something ( name is not empty)

    cout << "Hello, " << name;

    /*Example Result:
    Enter your name:
    Enter your name:
    Enter your name: John
    Hello, John */
    
    //end

    cout << endl;

    return 0;

}