#include <iostream>
using namespace std;
    
int main() {
    /*other types of variables
    int myNum 5;                // Integer (whole number)
    double myFloatNum = 5.99;   // Floating point number(with decimals)
    char myLetter = 'D';        // Character
    string myText = "Hello";    // String (text)
    bool myBoolean = true;      // Boolean (true or false) */

    //To combine both text and a variable, separate them with the << operator
    cout << endl;

    //display variables
    int myAge = 35;
    cout << "I am " << myAge << " years old." << endl;

     cout << endl;

    //You can also combine different types
    string name = "John";
    int age = 35;
    double height = 6.1;

    cout << name << " is " << age << " years old and " << height << " feet tall." << endl;

    cout << endl;

    //add variables together
    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << sum;

    cout << endl;

    return 0;
}