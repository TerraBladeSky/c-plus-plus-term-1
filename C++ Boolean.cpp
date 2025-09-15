#include <iostream>
#include <string>
using namespace std;

int main() {
    //booleans
    //boolean values
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun; // outputs 1 (true)
    cout << isFishTasty; // outputs 0 (false)

    cout << endl;

    //boolean expressions
    /*A Boolean expression returns a boolean value, 
    which is either 1 (true) or 0 (false).
    This is useful for building logic and finding answers.
    You can use a comparison operator, such as the greater than (>) 
    operator, to find out if an expression (or variable) is true or 
    false*/
    int x = 10;
    int y = 9;
    cout << (x,y); // returns 1 (true), because 10 is higher than 9

    //or 

    cout << (10 > 9); // returns 1 (true), because 10 is higher than 9

    cout << endl;

    //use of ==
    int x = 10;
    cout << (x == 10); // returns 1 (true), because the value of x is equal to 10
    cout << (10 == 15); // returns 0 (false), because 10 is not equal to 15

    cout << endl;

    //real life example
    int myAge = 25;
    int votingAge = 18;

    cout << (myAge >= votingAge); // retuns 1 (true), meaning 25 yea olds are allowed to vote

    //how to make this better
    if (myAge >= votingAge) {
        cout << "old enough to vote";
    } else {
        cout << "not old enough to vote";
    }

    //outputs: old enough to vote

    cout << endl;

    //end

    cout << endl;

    return 0;

}