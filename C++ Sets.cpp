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
    //sets

    // Include the set library
    #include <set>

    // Create a set called cars that will store strings
    set<string> cars;
        
    // eg
    // Create a set called cars that will store strings
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print set elements
    for (string car : cars) {
        cout << car << endl;
    }

    // output
    /* 
    BMW
    Ford
    Mazda
    Volvo 
    */

    // eg 2
    // Create a set called numbers that will store integers
    set<int> numbers = {1, 7, 3, 2, 5, 9};

    // Print set elements
    for (int num : numbers) {
        cout << num << endl;
    }

    /*
    1
    2
    3
    5
    7
    9
    */

    // sort in descending order
    // Sort elements in a set in descending order
    set<int, greater<int>> numbers = {1, 7, 3, 2, 5, 9};
    // Print the elements
    for (int num : numbers) {
        cout << num << endl;
    }

    /*
    9
    7
    5
    3
    2
    1
    */

    // unique elements
    set<string> cars = {"Volvo", "BMW", "Ford", "BMW", "Mazda"};

    // Print set elements
    for (string car : cars) {
        cout << car << endl;
    }

    /*
    BMW
    Ford
    Mazda
    Volvo 
    */

    // add elements
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Add new elements
    cars.insert("Tesla");
    cars.insert("VW");
    cars.insert("Toyota");
    cars.insert("Audi");

    // remove elements
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Remove elements
    cars.erase("Volvo");
    cars.erase("Mazda");

    // eg
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Remove all elements
    cars.clear();

    // find the size of a set
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars.size();  // Outputs 4

    //check if a set is empty
    set<string> cars;
    cout << cars.empty();  // Outputs 1 (The set is empty)

    // eg
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars.empty();  // Outputs 0 (not empty)

    // loop through a set
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for (string car : cars) {
        cout << car << endl;
    }

    //end

    cout << endl;

    return 0;

}