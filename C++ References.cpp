#include <iostream>
#include <string>
using namespace std;

int main() {
    //references
    //creating references
    //eg
    string food = "Pizza"; // food variable
    string &meal = food; // reference to food

    cout << food << endl; //outputs Pizza
    cout << meal << endl; //outputs Pizza

    //updating through references
    string food = "Pizza"; // food variable
    string &meal = food; // reference to food

    meal = "Burger"; // changes both meal and food

    cout << food << endl; //outputs Burger
    cout << meal << endl; //outputs Burger

    //memory address
    string food = "Pizza"; 
    
    cout << &food; // Outputs 0x6dfed4

    //end

    cout << endl;

    return 0;

}