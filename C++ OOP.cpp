#include <iostream>
#include <string>
using namespace std;

int main() {
    //OOP
    // What is OOP?
    /*
    OOP stands for Object oriented programming. OOP is about 
    creating objects, which can hold data and functions that 
    work on that data
    
    Advantages of OOP
    - OOP provides a clear structure to programs
    - Makes code easier to maintain, reuse, and debug
    -Helps keep your code 'Dont repeat yourself'
    - Makes it possible to create full reusable applications with less
    code and shorter development time

    Tip: the DRY principle means you should avoid writing the same 
    code more than once. Move repeated code into functions or classes
    and reuse it

    What are classes and Objects?
    Classes and bjects are the two main aspects of OOP. A class 
    defines what an object should look like, and an object is created 
    based on that class. Eg:
    Class   Objects
    Car     Apple, Banana, Mango
    Fruit   Volvo, Audi, Toyota

    When you create an object from a class, it inherits all the 
    variables and functions defined inside that class.

    Procedural vs Object-Oriented Programming
    Procedural Programming is about writing functions that operate on
    data. OOP is about creating objects that contain both the data and 
    the functions.
    */

    //create a class
    class Myclass {             // the class
        public:                 // access specificer
            int myNum;          // attribute ( int variable )
            string myString;    // attribute ( string variable )
    };

    //create an object
    //create a class
    class Myclass {             // the class
        public:                 // access specificer
            int myNum;          // attribute ( int variable )
            string myString;    // attribute ( string variable )
    };

    int main() {
        MyClass myObj; // create an object of MyClass

        // access attributes and set values
        myObj.myNum = 15;
        myObj.myString = "some text";

        //print attribute values
        cout << myObj.myNum << endl;
        cout << myObj.myString;
        return 0;
    }

    // multiple objects
    //eg
    // create a car class with some attributes
    class Car {
        public:
            string brand;
            string model;
            int year;
    };

    int main() {
        //create an object of car
        Car carObj1;
        carObj1.brand = "BMW";
        carObj1.model = "X5";
        carObj1.year = 1999;

        // create another object of Car
        Car carObj2;
        carObj2.brand = "Ford";
        carObj2.model = "Mustang";
        carObj2.year = 1969;

        //print attirbute values
        cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
        cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
        return 0;
    }

    //eg
    /*
    #include <iostream>
    #include <string>
    using namespace std;

    class Book {
        public:
            string title;
            string author;
            int year;
        
    };

    int main() {
        Book book1;
        book1.title = "Matilda"
        book1.author = "Roald Dahl";
        book1.year = 1988;

        Book book2;
        book2.title = "The Giving Tree";
        book2.author = "Shel Silverstein";
        book2.year = 1964;

        cout << book1.title << ", " << book1.author << ", " << book1.year << endl;
        cout << book2.title << ", " << book2.author << ", " << book2.year;

        return 0;
    }
    */

    //class methods
    //define a method inside the class
    //eg
    class MyClass {             //the class
        public:                 // access specifier
            void myMethod() {   // mtehod/function defined inside the class
                cout << "Hello World";
            }
    };

    int main() {
        MyClass myObj;      //create an object of MyClass
        myObj.yyMethod();   //call the method
        return 0;
    }

    //define a method outside the class
    //eg
    class MyClass {             //the class
        public:                 // access specifier
            void myMethod()    // method/function defined inside the class
    };

    // method function definition outside the class
    void MyClass::myMethod() {
        cout << "Hello World";
    }

    int main() {
        MyClass myObj;      //create an object of MyClass
        myObj.yyMethod();   //call the method
        return 0;
    }

    //parameters
    #include <iostream>
    using namespace std;

    class Car {
        public:
            int speed(int maxSpeed);
    };

    int Car::speed(int maxSpeed) {
        return maxspeed;
    }

    int main() {
        Car myObj; //create an object of Car
        cout << myObj.speed(200); // call the method with an argument
        return 0;
    }

    //eg
    /*
    #include <iostream>
    using namespace std;

    class Dog {
        public:
            void bark() {
                cout << "Woof!";
            }
    };

    int main() {
        Dog myDog;
        myDog.bark();
        return 0;
    }
    */

    //constructors
    class MyClass {     //the class
        public:         //the access specifier
            MyClass() { //constructor
                cout << "Hello World!";
            }
    };

    int main() {
        MyClass myObj;  //create an object of MyClass (this will call the constructor)
        return 0;
    }

    //constructor with parameters
    class Car {         // The class
        public:         // Access specifier
        string brand;   // attribute
        string model;   // attribute
        int year;       // attribute
        Car(string x, string y, int z) { // constructor w/ parameters
            brand = x;
            model = y;
        }
    };

    int main() {
        //create car objects and call the constructor with different values
        Car carObj1("BMW", "X5", 1999);
        Car carObj2("Ford", "Mustang", 1969);

        //print values
        cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
        cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
        return 0;
    }

    //constructor defined outside of the class
    class Car {             // the class
        public:             // access specifier
            string brand;   // attribute
            string model;   // attribute
            int year;       // attribute
            Car(string x, string y, int z); //constructor declaration
    };

    //constructor definition outside the class
    Car::Car(string x, string y, int z) {
        brand = x;
        model = y;
        year = z;
    }

    int main() {
        //create car objects and call the constructor with different values
        Car carObj1("BMW", "X5", 1999);
        Car carObj2("Ford", "Mustang", 1969);

        //print values
        cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
        cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
        return 0;
    }

    //constructor overloading
    //eg
    class Car {
        public:
            string brand;
            string model;

            Car() {
                brand = "Unknown";
                model = "Unknown";
            }

            Car(string b, string m) {
                brand = "b";
                model = "m";
            }
    };

    int main() {
        Car car1;
        Car car2("BMW", "X5")
        Car car3("Ford", "Mustang");

        cout << "Car1: " << car1.brand << " " << car1.model << endl;
        cout << "Car2: " << car2.brand << " " << car2.model << endl;
        cout << "Car3: " << car3.brand << " " << car3.model;
        return 0;
    }

    /*
    Car1: Unknown Unknown
    Car2: BMW X5
    Car3: Ford Mustang 
    */

    //end

    cout << endl;

    return 0;

}