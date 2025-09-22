#include <iostream>
#include <string>
using namespace std;

int main() {
    //enumeration
    enum Level {
        LOW,
        MEDIUM,
        HIGH
    };

    enum Level myVar;

    enum Level myVar = MEDIUM;

    int main() {
        //create an enum variable and assign a value to it
        enum Level myVar = MEDIUM;

        //print the enum variable
        cout << myVar;

        return 0;
    }

    //change values
    enum Level {
        LOW = 25,
        MEDIUM = 50,
        HIGH = 75
    };

    int main() {
        enum Level myVar = MEDIYUM;
        cout << myVar; // Now outputs 50
        return 0;
    }

    enum Level {
        LOW = 5,
        MEDIUM, // now 6
        HIGH // now 7
    };

    //enum with in a switch statement
    enum Level {
        LOW = 1,
        MEDIUM,
        HIGH
    };

    int main() {
        enum Level myVar = MEDIUM;

        switch (myVar) {
            case 1:
                cout << "Low Level";
                break;
            case 2:
                cout << "Medium level";
                break;
            case 3:
                cout << "High level";
                break;
        }
        return 0;
    }

    //end

    cout << endl;

    return 0;

}
