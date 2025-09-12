#include <iostream>
#include <string>
using namespace std;

int main() {
    //auto keyword
    auto x = 5; //x is automatically treated as an int

    //eg
    //creating auto variables
    auto myNum = 5; //int
    auto myFloatNum = 5.99; //float
    auto myDoubleNum = 9.98; //double
    auto myLetter = 'D'; //char
    auto myBoolean = true; //bool
    auto myString = "Hello"; // std::string

    /*Important Notes
    auto only works when you assign a value at the same time 
    (You can't declare auto x; without assigning a value)
    Once the type is chosen, it stays the same. See example below:*/
    auto x = 5; //x is now an int
    x = 10; //OK - still an int
    x = 9.99; //ERROR - x is still an int

    cout << endl;

    return 0;

}