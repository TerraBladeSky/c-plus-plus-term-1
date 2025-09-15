#include <iostream>
#include <string>
using namespace std;

int main() {
    //switch
    //switch statements
    switch(expression) {
        case x:
            // code block
            break;
        case y:
            // code block
            break;
        default:
            // code block
    }

    cout << endl;

    /*This is how it works:
    The switch expression is evaluated once
    The value of the expression is compared 
    with the values of each case
    If there is a match, the associated block 
    of code is executed
    The break and default keywords are optional, 
    and will be described later*/

    //eg 1
    int day = 4;
    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
    }

    // outputs "Thursday" (day 4)

    cout << endl;

    //eg 2
    int day = 4
    switch (day) {
        case 6:
            cout << "Today is saturday";
            break;
        case 7:
            cout << "Today is Sunday";
            break;
        default:
            cout << "Looking forward to the weekend";
    }

    // outputs "looking forward to the weekend"

    cout << endl;

    //end

    cout << endl;

    return 0;

}