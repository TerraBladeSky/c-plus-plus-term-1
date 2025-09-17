#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;
    int* p = arr; // points to first element
    
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> *(p + i); // store the value
    }

    cout << "You entered: ";
    for (int i = 0; i < 5; i++) { 
        cout << *(p + i) << " "; // print array elements
        sum += *(p + i);
    }
    
    cout << "\nSum = " << sum << endl;
    
    return 0;
}