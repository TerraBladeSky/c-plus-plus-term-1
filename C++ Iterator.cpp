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
    //iterators

    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Create a vector iterator called it
    vector<string>::iterator it;

    // Loop through the vector with the iterator
    for (it = cars.begin(); it != cars.end(); ++it) {
        cout << *it << endl;
    }

    // what is begin() and end()?
    /*begin() and end() are functions that belong to data structures, 
    such as vectors and lists. They do not belong to the iterator itself. 
    Instead, they are used with iterators to access and iterate through 
    the elements of these data structures.
    begin() returns an iterator that points to the first element of the 
    data structure.
    end() returns an iterator that points to one position after the last 
    element.
    To understand how they work, let's continue to use vectors as an 
    example:*/

    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    vector<string>::iterator it;

    // begin examples
    // Point to the first element in the vector
    it = cars.begin();

    // eg 2
    // Point to the second element
    it = cars.begin() + 1;

    // eg 3
    // Point to the third element
    it = cars.begin() + 2;

    // end example
    // Point to the last element
    it = cars.end() - 1;

    // eg
    // Point to the first element in the vector
    it = cars.begin();

    // Modify the value of the first element
    *it = "Tesla";

    // Volvo is now Tesla

    // the auto keyword
    vector<string>::iterator it = cars.begin();

    auto it = cars.begin();

    // eg
    for (auto it = cars.begin(); it != cars.end(); ++it) {
        cout << *it << endl;
    }

    // for each loop vs iterators
    // for each loop
    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print vector elements
    for (string car : cars) {
        cout << car << endl;
    }

    // iterator
    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Loop through vector elements
    for (auto it = cars.begin(); it != cars.end(); ) {
        if (*it == "BMW") {
            it = cars.erase(it); // Remove the BMW element
        } else {
            ++it;
        }
    }

    // Print vector elements
    for (const string& car : cars) {
        cout << car << endl;
    }

    // iterate in reverse
    // Iterate in reverse order
    for (auto it = cars.rbegin(); it != cars.rend(); ++it) {
        cout << *it << endl;
    }

    //end

    // iterate through data structures

    //list example
    // Create a list called cars that will store strings
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Loop through the list with an iterator
    for (auto it = cars.begin(); it != cars.end(); ++it) {
        cout << *it << endl;
    }

    // deque example
    // Create a deque called cars that will store strings
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Loop through the deque with an iterator
    for (auto it = cars.begin(); it != cars.end(); ++it) {
        cout << *it << endl;
    }

    // set example
    // Create a set called cars that will store strings
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Loop through the set with an iterator
    for (auto it = cars.begin(); it != cars.end(); ++it) {
        cout << *it << endl;
    }

    // map example
    // Create a map that will store strings and integers
    map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

    // Loop through the map with an iterator
    for (auto it = people.begin(); it != people.end(); ++it) {
        cout << it->first << " is: " << it->second << endl;
    }

    // algorithms
    // eg
    #include <iostream>
    #include <vector>
    #include <algorithm>  // Include the <algorithm> library
    using namespace std;

    int main() {
        // Create a vector called cars that will store strings
        vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

        // Sort cars in alphabetical order
        sort(cars.begin(), cars.end());

        // Print cars in alphabetical order
        for (string car : cars) {
            cout << car << endl;
        }

        return 0;
    }

    // eg 2
    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;

    int main() {
        // Create a vector called numbers that will store integers
        vector<int> numbers = {1, 7, 3, 5, 9, 2};

        // Sort numbers numerically
        sort(numbers.begin(), numbers.end());

        for (int num : numbers) {
            cout << num << endl;
        }

        return 0;
    }

    // eg 3
    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;

    int main() {
        // Create a vector called numbers that will store integers
        vector<int> numbers = {1, 7, 3, 5, 9, 2};

        // Sort numbers numerically in reverse order
        sort(numbers.rbegin(), numbers.rend());

        for (int num : numbers) {
            cout << num << endl;
        }

        return 0;
    }

    cout << endl;

    return 0;

}