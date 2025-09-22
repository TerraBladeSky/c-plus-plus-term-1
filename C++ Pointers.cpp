#include <iostream>
#include <string>
using namespace std;

int main() {
    //pointers
    string food = "Pizzas"  // A food variable of type string
    string* ptr = &food; // A pointer variable, with the name ptr, that stores the address of food

    // Outputs the value of food (Pizza)
    cout << food << endl;  

    // Outputs the memory address of food (0x6dfed4)
    cout << &food << endl; 

    // outputs the memory address of food with the pointer (0x6dfed4)
    cout << ptr << endll;

    /*take note:
    Create a pointer variable with the name ptr, that points to a string 
    variable, by using the asterisk sign * (string* ptr). Note that the 
    type of the pointer has to match the type of the variable you're 
    working with. Use the & operator to store the memory address of the 
    variable called food, and assign it to the pointer. Now, ptr holds 
    the value of food's memory address.*/

    //dereferencing
    //get memory address and value
    //eg
    string food = "Pizza" // variable declaration
    string* ptr = &food; // pointer declaration

    //reference: output the memory address od food with the pointer
    cout << ptr << endl;

    // deference: output the value of food with the pointer
    cout << ptr << endl;

    /* Note that the * sign can be confusing here, as it does two 
    different things in our code: When used in declaration (string* 
    ptr), it creates a pointer variable. When not used in declaration, 
    it act as a dereference operator.*/

    string food = "Pizza";
    string* ptr = &food;

    // Output the value of food (Pizza)
    cout << food << endl;

    // Output the memory address of food (0x6dfed4)
    cout << &food << endl;

    // Access the memory address of food and output its value (Pizza)
    cout << *ptr << endl;

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output the new value of the pointer (Hamburger)
    cout << *ptr << endl;

    // Output the new value of the food variable (Hamburger)
    cout << food << endl;

    //end

    cout << endl;

    return 0;

}