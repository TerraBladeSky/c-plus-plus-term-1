#include <iostream>
#include <string>
using namespace std;

int main() {
    //lambda functions
    //syntax
    //[capture] (parameters) { code };

    //basic eg
    int main() {
        auto message = [] () {
            cout << "Hello World!" << endl;
        };

        message();
        return 0;
    }

    //lambda w/parameters
    int main() {
        auto add = [](int a, int b) {
            return a + b;
        };

        cout << add(3, 4);
        return 0;
    }

    //passing lambdas to functions
    #include <iostream>
    #include <functional> // needed for std:: function
    using namepsace std;

    // a function that takes another function as a parameter
    void myFunction(function<void()> func) {
        func();
        func();
    }

    int main() {
        auto message = []() {
            cout << "Hello World!" << endl;
        };

        myFunction(message);
        return 0;
    }

    //result
    //Hello World!
    //Hello World!

    //using lambdas in loops
    int main() {
        for (int i = 1; i <= 3; i++) {
            auto show = [i]() {
                cout << "Number: " << i << endl;
            };
            show();
        }
        return 0;
    }

    //result
    // number: 1
    // number: 2
    // number: 3

    //capture clause []
    int main() {
        int x = 10;
        auto show = [x]() {
            cout << x;
        };

        show();
        return 0;
    }

    //result
    //10

    //capture by reference
    int main() {
        int x = 10;

        auto show = [&x]() {
            cout << x;
        };

        x = 20; // change x after the lambda is created

        show();
        return 0;
    }

    //result
    //20

    /*Regular Functions vs Lambda Functions

    Both regular functions and lambda functions let you group code and run it later, but they are used in slightly different situations.
    Use a regular function when:

        You plan to reuse the function in multiple places
        You want to give the function a clear, meaningful name
        The logic is long or complex

    Use a lambda function when:

        You only need the function once
        The code is short and simple
        You want to pass a quick function into another function

    Both of these examples do the same thing. They return the sum of two numbers:*/
    
    //Regular Function
    int add(int a, int b) {
        return a + b;
    }
    
    //Lambda Function
    auto add = [](int a, int b) {
        return a + b;
    };

    //end

    cout << endl;

    return 0;

}