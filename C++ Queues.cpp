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
    //queues
    
    // Include the queue library
    #include <queue>

    //create a queue
    // Create a queue of strings called cars
    queue<string> cars;

    queue<string> cars = {"Volvo", "BMW", "Ford", "Mazda"}; 

    //add elements
    // Create a queue of strings
    queue<string> cars;

    // Add elements to the queue
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    //outupt
    /*
    Volvo (front (first) element)
    BMW
    Ford
    Mazda (back (last) element) 
    */

    //access queue elements
    // Access the front element (first and oldest)
    cout << cars.front();  // Outputs "Volvo"

    // Access the back element (last and newest)
    cout << cars.back();  // Outputs "Mazda"

    //change front and back elements
    // Change the value of the front element
    cars.front() = "Tesla";

    // Change the value of the back element
    cars.back() = "VW";

    // Access the front element
    cout << cars.front();  // Now outputs "Tesla" instead of "Volvo"

    // Access the back element
    cout << cars.back();  // Now outputs "VW" instead of "Mazda"

    //remove elements
    // Create a queue of strings
    queue<string> cars;

    // Add elements to the queue
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    // Remove the front element (Volvo)
    cars.pop();

    // Access the front element (Now BMW)
    cout << cars.front();

    //get the size of the queue
    cout << cars.size();

    // check if the queue is empty
    queue<string> cars;
    cout << cars.empty(); // Outputs 1 (The queue is empty)

    //eg
    queue<string> cars;

    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    cout << cars.empty();  // Outputs 0 (not empty)

    //end

    cout << endl;

    return 0;

}