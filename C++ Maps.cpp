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
    // maps

    // Include the map library
    #include <map>
    
    // Create a map called people that will store strings as keys and integers as values
    map<string, int> people

    // Create a map that will store the name and age of different people
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} }; 

    // access a map
    // Create a map that will store the name and age of different people
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    // Get the value associated with the key "John"
    cout << "John is: " << people["John"] << endl;

    // Get the value associated with the key "Adele"
    cout << "Adele is: " << people["Adele"] << endl;

    // eg
    // Create a map that will store the name and age of different people
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    // Get the value associated with the key "Adele"
    cout << "Adele is: " << people.at("Adele") << endl;

    // Get the value associated with the key "Bo"
    cout << "Bo is: " << people.at("Bo") << endl;

    // Create a map that will store the name and age of different people
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    // Try to access an element that does not exist (will throw an exception)
    cout << people.at("Jenny");

    //change values
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    // Change John's value to 50 instead of 32
    people["John"] = 50;

    cout << "John is: " << people["John"];  // Now outputs John is: 50

    // eg
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    // Change John's value to 50 instead of 32
    people.at("John") = 50;

    cout << "John is: " << people.at("John");  // Now outputs John is: 50

    // add elements
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    // Add new elements
    people["Jenny"] = 22;
    people["Liam"] = 24;
    people["Kasper"] = 20;
    people["Anja"] = 30;

    // eg
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    // Add new elements
    people.insert({"Jenny", 22});
    people.insert({"Liam", 24});
    people.insert({"Kasper", 20});
    people.insert({"Anja", 30});

    // elements with equal keys
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    // Trying to add two elements with equal keys
    people.insert({"Jenny", 22});
    people.insert({"Jenny", 30});

    // remove elements
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    // Remove an element by key
    people.erase("John");

    // eg
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    // Remove all elements
    people.clear();

    // find the size of a map
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };
    cout << people.size();  // Outputs 3

    // check if a map is empty
    map<string, int> people;
    cout << people.empty(); // Outputs 1 (The map is empty)

    // eg 
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };
    cout << people.empty();  // Outputs 0 (not empty)

    // eg 2
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };
    cout << people.count("John");  // Outputs 1 (John exists)

    // loop through a map
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    for (auto person : people) {
        cout << person.first << " is: " << person.second << endl;
    }

    /*
    Adele is: 45
    Bo is: 29
    John is: 32 
    */

    // eg
    map<string, int, greater<string>> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    for (auto person : people) {
        cout << person.first << " is: " << person.second << endl;
    }

    /*
    John is: 32
    Bo is: 29
    Adele is: 45
    */

    //end

    cout << endl;

    return 0;

}