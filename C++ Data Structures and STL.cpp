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
    //data structures & stl
    // Include the vector library
    #include <vector>

    // Include the list library
    #include <list>

    // Include the set library
    #include <set>

    // Include the map library
    #include <map>

    // Include the stack library
    #include <stack>

    // Include the queue library
    #include <queue>

    //eg
    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print vector elements
    for (string car : cars) {
        cout << car << endl;
    }

    //vectors
    #include <vector>

    //create a vector called cars that will store strings
    vector<string> cars;

    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print vector elements
    for (string car : cars) {
        cout << car << endl;
    }

    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Get the first element
    cout << cars[0];  // Outputs Volvo

    // Get the second element
    cout << cars[1];  // Outputs BMW

    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Get the first element
    cout << cars.front();

    // Get the last element
    cout << cars.back();

    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Get the second element
    cout << cars.at(1);

    // Get the third element
    cout << cars.at(2); 

    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Try to access an element that does not exist (throws an error message)
    cout << cars.at(6);

    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Change the value of the first element
    cars[0] = "Opel";

    cout << cars[0];  // Now outputs Opel instead of Volvo

    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Change the value of the first element
    cars.at(0) = "Opel";

    cout << cars.at(0);  // Now outputs Opel instead of Volvo

    // add vector elements
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    cars.push_back("Tesla");

    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    cars.push_back("Tesla");
    cars.push_back("VW");
    cars.push_back("Mitsubishi");
    cars.push_back("Mini");

    //remove vector elements
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    cars.pop_back();

    //vector size
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars.size();  // Outputs 4

    //check if a vector is empty
    vector<string> cars;
    cout << cars.empty();  // Outputs 1 (The vector is empty)

    //eg
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars.empty();  // Outputs 0 (not empty)

    //loop through a vector
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for (int i = 0; i < cars.size(); i++) {
        cout << cars[i] << endl;
    }

    //for each loop
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for (string car : cars) {
        cout << car << endl;
    }

    cout << endl;

    return 0;

}