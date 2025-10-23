#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
using namespace std;

int main() {
    // stack
    
    // Include the stack library
    #include <stack>

    // Create a stack of strings called cars
    stack<string> cars;

    stack<string> cars = {"Volvo", "BMW", "Ford", "Mazda"}; 

    // add elements
    // Create a stack of strings called cars
    stack<string> cars;

    // Add elements to the stack
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    /*
    Mazda (top element)
    Ford
    BMW
    Volvo 
    */

    //access sstack elements
    // Access the top element
    cout << cars.top();  // Outputs "Mazda"

    //change the top element
    // Change the value of the top element
    cars.top() = "Tesla";

    // Access the top element
    cout << cars.top();  // Now outputs "Tesla" instead of "Mazda"

    //remove elements
    // Create a stack of strings called cars
    stack<string> cars;

    // Add elements to the stack
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    // Remove the last added element (Mazda)
    cars.pop();

    // Access the top element (Now Ford)
    cout << cars.top();

    //get the size of the stack
    cout << cars.size();

    // check if the stack is empty
    stack<string> cars;
    cout << cars.empty(); // Outputs 1 (The stack is empty)

    //eg
    stack<string> cars;

    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    cout << cars.empty();  // Outputs 0 (not empty)

    //end

    cout << endl;

    return 0;

}