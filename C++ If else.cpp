#include <iostream>
#include <string>
using namespace std;

int main() {
    //if...else
    // conditions and if statements
    /* You can use these conditions to perform different 
    actions for different decisions.
    C++ has the following conditional statements:

    Use if to specify a block of code to be executed, 
    if a specified condition is true

    Use else to specify a block of code to be executed, 
    if the same condition is false

    Use else if to specify a new condition to test, 
    if the first condition is false

    Use switch to specify many alternative blocks of 
    code to be executed */

    //if statement
    if (condition) {
        // block of code to be executed if the condition is true
    }

    //example
    if (20 > 18) {
        cout << "20 is greater than 18";
    }

    cout << endl;

    //testing variables
    int x = 20;
    int y = 18;
    if (x > y) {
        cout << "x is greater than y";
    }

    cout << endl;

    //else statement
    if (condition) {
        // block of code to be executed if the condition is true
    } else {
        // block of condition the be executed if the condition is false
    }

    //example
    int time = 20;
    if (time < 18) {
        cout << "good day";
    } else {
        cout << "good evening";
    }

    //outputs "good evening"

    cout << endl;

    //else if statement
    if (condition1) {
        // block of code to be executed if conditon1 is true
    } else if (condition2) {
        //block of code to be executed if condition1 is false and condition2 is true
    } else {
        //block of code to be executed if the condition1 is false and condition2 is false
    }

    //example
    int time = 22;
    if (time < 10) {
        cout << "good morning";
    } else if (time < 20) {
        cout << "good day";
    } else {
        cout << "good evening";
    }

    //outputs "good evening"

    cout << endl;

    //short hand if else
    /*There is also a short-hand if else, which is known as the 
    ternary operator because it consists of three operands.
    It can be used to replace multiple lines of code with a 
    single line, and is often used to replace simple if else 
    statements:*/

    //syntax
    variable = (condition) ? expressionTrue : expressionFalse;

    //instead of writing
    int (time < 18) {
        cout << "good day";
    } else {
        cout << "good evening";
    }

    cout << endl;

    //you can write
    int time = 20;
    string result = (time < 18) ? "good day" : "good evening";
    cout << result;

    cout << endl;

    //real life examples
    //eg 1
    int doorCode = 1337;

    if (doorCode == 1337) {
        cout << "correct code.\nThe door is now open";
    } else {
        cout << "wrong code.\nThe door remains closed"
    }

    cout << endl;

    //eg 2
    int myNum = 10; // is this a positive or a negative number?

    if (myNum > 0) {
        cout << "the value is a positive number" << endl;
    } else if (myNum < 0) {
        cout << "the value is a negative number" << endl;
    } else {
        cout << "the value is 0" << endl;
    }

    cout << endl;

    //eg 3
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
        cout << "old enough to vote" << endl;
    } else {
        cout << "not old enough to vode" << endl;
    }

    cout << endl;

    //eg 4
    int myNum = 5;

    if (myNum % 2 == 0) {
        cout << myNum << " is even" << endl;
    } else {
        cout << myNum << " is odd" << endl;
    }

    cout << endl;

    //end

    cout << endl;

    return 0;

}