#include <iostream>
#include <string>
using namespace std;

int main() {
    //break and continue
    //break
    /*You have already seen the break statement used 
    in an earlier chapter of this tutorial. It was used to 
    "jump out" of a switch statement.The break statement 
    can also be used to jump out of a loop.This example 
    jumps out of the loop when i is equal to 4:*/
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << endl;
    }

    //continue
    /*The continue statement breaks one iteration 
    (in the loop), if a specified condition occurs, 
    and continues with the next iteration in the loop.
    This example skips the value of 4:*/
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << endl;
    }
    
    /*Break and Continue in While Loop
    You can also use break and continue in while loops:*/
    //break eg
    int i = 0;
    while (i < 10) {
        cout << i << endl;
        i++;
        if (i == 4) {
            break;
        }
    }

    //continue eg
    int i = 0;
    while (i < 10) {
        if (i == 4) {
            i++;
            continue;
        }
        cout << i << endl;
        i++;
    }

    cout << endl;

    //end

    cout << endl;

    return 0;

}