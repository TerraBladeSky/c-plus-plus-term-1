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
    //deque

    // Include the deque library
    #include <deque>

    // create a deque
    // Create a deque called cars that will store strings
    deque<string> cars;

    // eg
    // Create a deque called cars that will store strings
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print deque elements
    for (string car : cars) {
        cout << car << "\n";
    }

    // access a deque
    // Create a deque called cars that will store strings
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Get the first element
    cout << cars[0];  // Outputs Volvo

    // Get the second element
    cout << cars[1];  // Outputs BMW

    // eg
    // Create a deque called cars that will store strings
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Get the first element
    cout << cars.front();

    // Get the last element
    cout << cars.back();

    // eg2
    // Create a deque called cars that will store strings
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Get the second element
    cout << cars.at(1);

    // Get the third element
    cout << cars.at(2);

    // eg3
    // Create a deque called cars that will store strings
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Try to access an element that does not exist (will throw an exception)
    cout << cars.at(6);

    // change a deque
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Change the value of the first element
    cars[0] = "Opel";

    cout << cars[0];  // Now outputs Opel instead of Volvo

    // eg
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Change the value of the first element
    cars.at(0) = "Opel";

    cout << cars.at(0);  // Now outputs Opel instead of Volvo

    // add deque elements
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Add an element at the beginning
    cars.push_front("Tesla");

    // Add an element at the end
    cars.push_back("VW");

    //remove deque elements
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Remove the first element
    cars.pop_front();

    // Remove the last element
    cars.pop_back();

    // deque size
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars.size();  // Outputs 4

    // check if a deque is empty
    deque<string> cars;
    cout << cars.empty();  // Outputs 1 (The deque is empty)

    // eg
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars.empty();  // Outputs 0 (not empty)

    // loop through a deque
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for (int i = 0; i < cars.size(); i++) {
        cout << cars[i] << "\n";
    }

    // for each loop
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for (string car : cars) {
        cout << car << "\n";
    }
        
    //end

    cout << endl;

    return 0;

}