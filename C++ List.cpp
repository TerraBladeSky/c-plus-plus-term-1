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
    //list
    
    // Include the list library
    #include <list>

    // Create a list called cars that will store strings
    list<string> cars;

    // Create a list called cars that will store strings
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print list elements
    for (string car : cars) {
        cout << car << endl;
    }

    //access a list
    // Create a list called cars that will store strings
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Get the first element
    cout << cars.front();  // Outputs Volvo

    // Get the last element
    cout << cars.back();  // Outputs Mazda\
    
    //change list element
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Change the value of the first element
    cars.front() = "Opel";

    // Change the value of the last element
    cars.back() = "Toyota";

    cout << cars.front(); // Now outputs Opel instead of Volvo
    cout << cars.back();  // Now outputs Toyota instead of Mazda

    //add list element
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Add an element at the beginning
    cars.push_front("Tesla");

    // Add an element at the end
    cars.push_back("VW");

    //remove list element
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Remove the first element
    cars.pop_front();

    // Remove the last element
    cars.pop_back();

    //list size
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars.size();  // Outputs 4

    //check if a list is empty
    list<string> cars;
    cout << cars.empty();  // Outputs 1 (The list is empty)

    // loop through a list
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for (int i = 0; i < cars.size(); i++) {
        cout << cars[i] << endl;
    }

    // for each loop
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for (string car : cars) {
        cout << car << endl;
    }

    //end

    cout << endl;

    return 0;

}