#include <iostream>
#include <string>
using namespace std;

int main() {
    //Memory Management
    //get memory size
    int main() {
        int myInt;
        float myFloat;
        double myDouble;
        char myChar;

        cout << sizeof(myInt) << "\n";     // 4 bytes (typically)
        cout << sizeof(myFloat) << "\n";   // 4 bytes
        cout << sizeof(myDouble) << "\n";  // 8 bytes
        cout << sizeof(myChar) << "\n";    // 1 byte
        return 0;
    }

    //C++ new and delete

    //the new keyword
    /*The new keyword lets you manage memory yourself. In the example 
    below, we create memory space for an integer using new, store the 
    value 35 in it, and print it using a pointer:*/
    int* ptr = new int;
    *ptr = 35;
    cout << *ptr;

    /*The delete Keyword
    When you create something with new, it's your job to remove it
    when you're done. To do that, use delete:*/
    delete ptr;

    /*Using new and delete with Arrays
    You can also use the new keyword to create dynamic arrays. Note: 
    For arrays, use new[] and delete[]. For single variables, use new 
    and delete. Dynamic arrays are useful when you don't know the size 
    of the array in advance - like when the size depends on user input 
    or other values that are not known at the start of the program.
    For example, imagine you run a hotel. Since you don't know how many 
    guests will arrive, you ask the user for the number and create that 
    many rooms - one to store each guest's name:*/
    int main() {
        int numGuests;
        cout << "How many guests? ";
        cin >> numGuests;

        //check for invalid input
        if (numBuests <= 0) {
            cout << "Number of guests must be at least 1" << endl;
            return 0;
        }

        //create memory space for x guests ( an array of strings)
        string* guests = new string[numGuests];

        //ignore the lkeftover newline character after reading numGuests
        cin.ignore();

        // enter guest names
        for (int i = 0; i < numGuests; i++) {
            cout << "Enter name for guest " << (i + 1) << ": ";
            getline(cin, guests[i]); //read the full name (including spaces)
        }
        // show all guests
        cout << "\nGuests checked in:" << endl;
        for (int = 0; i < numGuests; i++) {
            cout << guests[i] << endl;
        }
        
        delete[] guests; //clean up memory
        return 0;
    }

    //end

    cout << endl;

    return 0;

}