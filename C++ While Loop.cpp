#include <iostream>
#include <string>
using namespace std;

int main() {
    //while loop
    /*The while loop loops through 
    a block of code as long as a specified condition is true
    while (condition) {
        // code block to be executed
    }*/

    //eg
    int i = 0;
    while (i < 5) {
        cout << i << endl;
        i++;
    }

    //countdown eg
    int countdown = 3;
    while (countdown > 0) {
        cout << countdown << endl;
        countdown--;
    }

    cout << "Happy New Year!" << endl;

    cout << endl;

    // do/while looop
    /*The do/while loop is a variant of the while loop. 
    This loop will execute the code block once, before 
    checking if the condition is true. Then it will 
    repeat the loop as long as the condition is true.
    do {
        // code block to be executed
    }
    while (condition);
    
    */

    //do/while eg
    int i = 0;
    do { 
        cout << i << endl;
        i++;
    }
    while (i < 5);

    cout << endl;

    //condition is false from start
    /* In the example above, the condition i < 5 
    was true at the beginning, so the loop executed 
    multiple times. But what if the condition is false 
    right from the start?
    In the example below, the variable i starts at 
    10, so the condition i < 5 is false immediately 
    - yet the do/while loop still runs once:*/
    //eg
    int i = 10;
    do {
        cout << "i is " << i << endl;
        i++;
    } while (i < 5);

    //practical eg: user input
    /*This example keeps asking the user to enter 
    a positive number. The loop stops when the user 
    enters 0 or a negative number*/
    int number;
    do {
        "cout << enter a positive number: ";
        cin >> number;
    } while (number > 0);

    cout << endl;

    //real life examples
    /*To demonstrate a practical example of the while loop, 
    we have created a simple "countdown" program:*/
    int countdown = 3;

    while (countdown > 0) {
        cout << countdown << endl;
        countdown--;
    }

    cout << "Happy New Year!" << endl;

    cout << endl;

    /*In this example, we create a program that only 
    print even numbers between 0 and 10 (inclusive)*/
    int i = 0;
    
    while (i <= 10) {
        cout << i << endl;
        i += 2;
    }

    /*In this example we use a while 
    loop to reverse some numbers:*/
    // A variable with some specific numbers
    int numbers = 12345;

    // A variable to store the reversed number
    int revNumbers = 0;

    // Reverse and reorder the numbers
    while (numbers) {
        // Get the last number of 'numbers' and add it to the 'revNumbers'
        revNumbers = revNumbers * 10 + numbers % 10;
        // Remove the last number of 'numbers'
        numbers /= 10;
    }

    cout << "Reversed numbers: " << revNumbers << endl;

    cout << endl;

    /*To demonstrate a practical example of the while loop 
    combined with an if else statement, let's say we play 
    a game of Yatzy*/
    int dice = 1;

    while (dice <= 6) {
        if (dice < 6) {
            cout << "No Yatzy" << endl;
        } else {
            cout << "Yatzy" << endl;
        }
        dice = dice + 1;
    }
    /*If the loop passes the values ranging from 1 to 5, 
    it prints "No Yatzy". Whenever it passes the value 6, 
    it prints "Yatzy!"*/
    cout << endl;


    //end

    cout << endl;

    return 0;

}