#include <iostream>
#include <string>
using namespace std;

int main() {
    //variable scope
    //local scope
    void myFunction () {
        // local variable that belongs to myFunction
        int x = 5;

        //print variable x
        cout << x;
    }

    int main() {
        myFunction();
        return 0;
    }

    //global scope
    //global variable x
    int x = 5;

    void myFunction() {
        //we can use x here
        cout << x << endl;
    }

    int main() {
        myFunction();

        //we can also use x here
        cout << x;
        return 0;
    }

    //naming variables
    //global variable x
    int x = 5;

    void myFunction() {
        //local variable with the same name as the global variable (x)
        int x = 22;
        cout << x << endl; // refers to the local variable x
    }

    int main() {
        myFunction();

        cout << x; // refers to the global variable x
        return 0;
    }

    /*However, you should avoid using the same variable name for both 
    globally and locally variables as it can lead to errors and 
    confusion. In general, you should be careful with global variables, 
    since they can be accessed and modified from any function:*/

    // Global variable x
    int x = 5;

    void myFunction() {
        cout << ++x << "\n"; // Increment the value of x by 1 and print it
    }

    int main() {
        myFunction();

        cout << x; // Print the global variable x
        return 0;
    }

    // The value of x is now 6 (no longer 5)

    //end

    cout << endl;

    return 0;

}