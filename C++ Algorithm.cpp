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
    //algorithms
    
    // Include the algorithm library
    #include <algorithm>

    // sorting algorithms
    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Sort cars alphabetically
    sort(cars.begin(), cars.end());

    // eg
    // Create a vector called numbers that will store integers
    vector<int> numbers = {1, 7, 3, 5, 9, 2};

    // Sort numbers numerically
    sort(numbers.begin(), numbers.end());

    // eg 2
    // Create a vector called numbers that will store integers
    vector<int> numbers = {1, 7, 3, 5, 9, 2};

    // Sort numbers numerically in reverse order
    sort(numbers.rbegin(), numbers.rend());

    // eg 3
    // Create a vector called numbers that will store integers
    vector<int> numbers = {1, 7, 3, 5, 9, 2};

    // Sort numbers numerically, starting from the fourth element (only sort 5, 9, and 2)
    sort(numbers.begin() + 3, numbers.end());

    // search algorithms
    Seach for the number 3 in "numbers":
    // Create a vector called numbers that will store integers
    vector<int> numbers = {1, 7, 3, 5, 9, 2};

    // Search for the number 3
    auto it = find(numbers.begin(), numbers.end(), 3);

    // eg
    // Create a vector called numbers that will store integers
    vector<int> numbers = {1, 7, 3, 5, 9, 2};

    // Sort the vector in ascending order
    sort(numbers.begin(), numbers.end());

    // Find the first value that is greater than 5 in the sorted vector
    auto it = upper_bound(numbers.begin(), numbers.end(), 5);

    // eg
    // Create a vector called numbers that will store integers
    vector<int> numbers = {1, 7, 3, 5, 9, 2};

    // Find the smallest number
    auto it = min_element(numbers.begin(), numbers.end()); 

    // eg 2
    // Create a vector called numbers that will store integers
    vector<int> numbers = {1, 7, 3, 5, 9, 2};

    // Find the largest number
    auto it = max_element(numbers.begin(), numbers.end()); 

    // modifying algorithms
    // Create a vector called numbers that will store integers
    vector<int> numbers = {1, 7, 3, 5, 9, 2};

    // Create a vector called copiedNumbers that should store 6 integers
    vector<int> copiedNumbers(6);

    // Copy elements from numbers to copiedNumbers
    copy(numbers.begin(), numbers.end(), copiedNumbers.begin()); 

    // eg
    // Create a vector called numbers that will store 6 integers
    vector<int> numbers(6);

    // Fill all elements in the numbers vector with the value 35
    fill(numbers.begin(), numbers.end(), 35); 

    //end

    cout << endl;

    return 0;

}