#include <iostream>
#include <string>
using namespace std;

int main() {
    //functions
    void myFunction() {
        // code to be executed
    }

    //call a function
    void myFunction() {
        cout << "I just got executed!";
    }
    
    int main() {
        myFunction(); //call the function
        return 0;
    }

    // outputs "I just got executed!"

    //a function can be called multiple times
    void myFunction() {
        cout << "I just got executed!";
    }
    
    int main() {
        myFunction(); 
        myFunction();
        myFunction();
        return 0;
    }

    // "I just got executed!"
    // "I just got executed!"
    // "I just got executed!"

    /*Function Declaration and Definition
    A C++ function consist of two parts:
    Declaration: the return type, the name of the function, 
    and parameters (if any)
    Definition: the body of the function (code to be executed)*/
    void myFunction() { // declaration
        // the body of the function
    }

    /*If a user-defined function, such as myFunction() is declared 
    after the main() function, an error will occur:*/

    /*However, it is possible to separate the declaration and the 
    definition of the function - for code optimization. You will 
    often see C++ programs that have function declaration above 
    main(), and function definition below main(). This will make the 
    code better organized and easier to read:*/

    //function declaration
    void myFunction();

    // the main method
    int main() {
        myFunction(); //call the function
        return 0;
    }

    // Function definition
    void myFunction() {
        cout << "I just got executed!";
    }

    //parameters and arguments
    void functionName(parameter1, parameter2, parameter3) {
        //code to be executed
    }

    //eg
    void myFunction(string fname) {
        cout << fname << " Refsnes" << endl;
    }

    int main() {
        myFucntion("Liam");
        myFucntion("Jenny");
        myFucntion("Anja");
        return 0;
    }

    // Liam Refsnes
    // Jenny Refsnes
    // Anja Refsnes

    //default parameters
    void myFunction(string country = "Norway") {
        cout << country << endl;
    }

    int main() {
        myFunction("Sweden");
        myFunction("India");
        myFunction();
        myFunction("USA");
        return 0;
    }

    // Sweden
    // India
    // Norway
    // USA

    //multiple parameters
    void myFunction(string fname, int age) {
        cout << fname << "Refsnes" << age << " years old" << endl;
    }

    int main() {
        myFunction("Liam", 3);
        myFunction("Jenny", 14);
        myFunction("Anja", 30);
        return 0;
    }

    // Liam Refsnes. 3 years old.
    // Jenny Refsnes. 14 years old.
    // Anja Refsnes. 30 years old.

    //return values
    //eg
    int myFunction(int x) {
        return 5 + x;
    }

    int main() {
        cout << myFunction(3);
        return 0;
    }

    //outputs 8 (5 + 3)

    //eg2
    int myFunction(int x, int y) {
        return x + y;
    }

    int main() {
        cout << myFunction(5, 3);
        return 0;
    }

    //outputs 8 (5 + 3)

    //eg3
    int myFunction(int x, int y) {
        return x + y;
    }

    int main() {
        int z = myFunction(5, 3);
        cout << z;
        return 0;
    }

    //outputs 8 (5 + 3)

    //practical eg
    int doubleGame(int x) {
        return x * 2;
    }

    int main() {
        for (int i = 1; i <= 5; i++) {
            cout << "Double of " << i << "is " << doubleGame(i) << endl;
        }
        return 0;
    }

    //pass by reference
    //Pass an integer by reference:
    void changeValue(int &num) {
        num = 50;
    }

    int main() {
        int value = 10;
        changeValue(value); //call the function and change the value to 50
        cout << value;
        return 0;
    }

    //pass two integers by reference
    void swapNums(int &x, int &y) {
        int z = x;
        x = y;
        y = z;
    }

    int main() {
        int firstNum = 10;
        int secondNum = 20;

        cout << "Before swap: " << endl;
        cout << firstNum << secondNum << endl;

        //Call the function, which will change the values of firstNum and secondNum
        swapNums(firstNum, secondNum);

        cout << "After Swap: " << endl;
        cout << firstNum << secondNum << endl;

        return 0;
    }

    //pass a string by reference
    void modifyStr(string &str) {
        str += " World!";
    }

    int main() {
        string greeting = "Hello"
        modifyStr(greeting);
        cout << greeting;
        return 0;
    }

    //pass arrays
    void myFunction(int myNumbers[5]) {
        for (int i = 0; i < 5; i++) {
            cout << myNumbers[i] << endl;
        }
    }

    int main() {
        int myNumbers[5] = {10, 20, 30, 40, 50};
        myFunction(myNumbers);
        return 0;
    }

    //pass structure to a function
    struct Car {
        string brand;
        int year;
    };

    void myFunction(Car c) {
        cout << "Brand: " << c.brand << ", Year: " << c.year << endl;
    }

    int main() {
        Car myCar = {"Toyota", 2020};
        myFunction(myCar);
        return 0;
    }

    //pass by reference
    struct Car {
        string brand;
        int year;
    };

    void updateYear(Car& c) {
        c.year++;
    }

    int main() {
        Car myCar = {"Toyota", 2020};
        updateYear(myCar);
        cout << "The " << myCar.brand << " is now from year " << myCar.year << endl;
        return 0;
    }

    //real life example
    //function to convert fahrenheit to celsius
    float toCelcius(float fahrenheit) {
        return (5.0 / 9.0) * (fahrenheit - 32.0);
    }

    int main() {
        //set a fahrenheit value
        float f_value = 98.8;

        //call the function with the fahrenheit value
        float result = toCelsius(f_value);

        //print the fahrenheit value
        cout << "Fahrenheit: " << f_value << endl;

        //print the result
        cout<< "Convert Fahrenheit to Celcius: " << result << endl;

        return 0;
    }

    //function overloading
    int myFunction(int x)
    float myFunction(float x)
    double myFunction(double x, double y)

    //without function overloading
    int plusFuncInt(int x, int y) {
        return x + y;
    }
    
    double plusFuncDouble(double x, double y) {
        return x + y;
    }

    int main() {
        int myNum1 = plusFuncInt(8, 5);
        double myNum2 = plusFuncDouble(4.3, 6.26);

        cout << "Int: " << myNum1 << endl;
        cout << "Double: " << myNum2;
        return 0;
    }

    //using function overloading
    int plusFunc(int x, int y) {
        return x + y;
    }
    
    double plusFunc(double x, double y) {
        return x + y;
    }

    int main() {
        int myNum1 = plusFunc(8, 5);
        double myNum2 = plusFunc(4.3, 6.26);

        cout << "Int: " << myNum1 << endl;
        cout << "Double: " << myNum2;
        return 0;
    }

    //function overloading by number of parameters
    int plusFunc(int x, int y) {
        return x + y;
    }

    int plusFunc(int x, int y, int z) {
     return x + y + z;
    }

    int main() {
        int result1 = plusFunc(3, 7);
        int result2 = plusFunc(1, 2, 3);

        cout << "Sum of 2 numbers: " << result1 << endl;
        cout << "Sum of 3 numbers: " << result2;
        return 0;
    }

    //end

    cout << endl;

    return 0;

}