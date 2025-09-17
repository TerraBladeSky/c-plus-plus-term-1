#include <iostream>
#include <string>
using namespace std;

int main() {
    //for loop
    /* When you know exactly how many times you want 
    to loop through a block of code, use the for loop 
    instead of a while loop:*/
    /*for (statement 1; statement 2; statement 3) {
        // code block to be executed
    }
    Statement 1 is executed (one time) before the 
    execution of the code block.

    Statement 2 defines the condition 
    for executing the code block.

    Statement 3 is executed (every time) after the code 
    block has been executed.*/

    //print numbers
    for (int i = 0; i < 5; i++) {
        cout << i << endl;
    }

    //print even numbers
    for (int i = 0; i <= 10; i = i +2) {
        cout << i << endl;
    }

    //sum of numbers
    for (int i = 1; i <= 5; i++) {
        sum = sum + i;
    }
    cout << "Sum is " << sum;

    cout << endl;

    //countdown
    for (int i = 5; i > 0; i--) {
        cout << i << endl;
    }

    //nested loops
    //outer loop
    for (int i = 1; i <= 2; ++i) {
        cout << "Outer: " << i << endl; // executed 2 times

        // inner loop
        for (int j = 1; j <= 3; ++j) {
            cout << "Inner: " << j << endl; //executed 6 times (2 * 3)
        }
    }

    //multiplication table eg
    for (int i =1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }

    /* result:
    1 2 3
    2 4 6
    3 6 9*/

    //for each loop
    for (type variableName : arrayName) {
        // code block to be executed
    }

    //eg
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int num : myNumbers) {
        cout << num << endl;
    }

    //looping through a string
    string word = "Hello";
    for (char c : word) {
        cout << c << endl;
    }

    //real life examples
    /*To demonstrate a practical example of the for loop, 
    let's create a program that counts to 100 by tens:*/
    for (int i = 0; i <= 100; i += 10) {
        cout << i << endl;
    }

    /*In this example, we create a program that only print 
    even numbers between 0 and 10 (inclusive):*/
    for (int i = 0; i <= 10; i = i + 2) {
        cout << i << endl;
    }

    /* Here we only print odd numbers:*/
    for ( int i = 1; i <= 10; i = i + 2) {
        cout << i << endl;
    }

    /*In this example we print the powers of 2 up to 512:*/
    for (int i = 2; i <= 512; i *= 2) {
        cout << i << endl;
    }

    /*in this example, we create a program that prints the 
    multiplication table for a specified number*/
    int number = 2;
    int i;

    //print the multiplication table for the number 2
    for (i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << "\n";
    }

    //end

    cout << endl;

    return 0;

}