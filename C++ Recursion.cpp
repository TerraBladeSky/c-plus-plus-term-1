#include <iostream>
#include <string>
using namespace std;

int main() {
    //recursion
    //eg
    int sum(int k) {
        if (k > 0) {
            return k + sum(k - 1);
        } else {
            return 0;
        }
    }

    int main() {
        int result = sum(10);
        cout << result;
        return 0;
    }

    /*Example Explained

    When the sum() function is called, it adds parameter k to the sum of all numbers smaller than k and returns the result. When k becomes 0, the function just returns 0. When running, the program follows these steps:
    10 + sum(9)
    10 + ( 9 + sum(8) )
    10 + ( 9 + ( 8 + sum(7) ) )
    ...
    10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
    10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0

    Since the function does not call itself when k is 0, the program stops there and returns the result.

    The developer should be very careful with recursion as it can be quite easy to slip into writing a function which never terminates, or one that uses excess amounts of memory or processor power.

    However, when written correctly recursion can be a very efficient and mathematically-elegant approach to programming.
    */

    //countdown
    void countdown(int n) {
        if (n > 0) {
            cout << n << " ";
            countdown(n - 1);
        }
    }

    int main() {
        countdown(5);
    }

    //factorial of a number
    int factorial(int n) {
        if (n > 1) {
            return n * factorial(n-1);
        } else {
            return 1;
        }
    }

    int main() {
        cout << "Factorial of 5 is " << factorial(5);
        return 0;
    }

    //end

    cout << endl;

    return 0;

}