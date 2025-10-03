#include <iostream>
#include <string>
using namespace std;

//access specifier
class MyClass { //the class
    public:     // access specifier
        //class members goes here
};

//eg
class MyClass {
    public:     // public access specifier
        int x;  //  public attribute
    private:    //private access specifier
        int y;  // private attribute
};

int main() {
    MyClass myObj;
    myObj.x = 25; // allowed (public)
    myObj.y = 50; // not allowed (private)

    return 0;

    /*
    If you try to access a private member, an error occurs:
    error: y is private 
    */

}

//eg
class MyClass {
    int x;      // private attribute
    int y;      //private attribure
};

//encapsulation
//access private members
#include <iostream>
using namespace std;

class Employee {
    private:
        //private attribute
        int salary;

    public:
        //setter
        void setSalary(int s) {
            salary = s;
        }
        //getter
        int getSalary() {
            return salary;
        }
};

int main() {
    Employee myObj;
    myObj.setSalary(50000);
    cout << myObj.getSalary();
    return 0;
}

//friend functions
class Employee {
    private:
        int salary;

    public:
        employee(int s) {
            salary = s;
        }

        // declare friend function
        friend void displaySalary(Employee emp);
};

void displaySalary(Employee emp) {
    cout << "Salary: " << emp.salary;
}

int main() {
    Employee myEmp(50000);
    displaySalary(myEmp);
    return 0;
}

//inheritance
//eg
//base class
class Vehicle {
    public:
        string brand = "Ford";
        void honk() {
            cout << "Tuut, tuut!";
        }
};

//derived class
class Car: public Vehicle {
    public:
        string model = "Mustang";
};

int main() {
    Car myCar;
    myCar.honnk();
    cout << myCar.brand + " " + myCar.model;
    return 0;
}

//multilevel inheritance
//base class
class MyClass {
    public:
    void myFunction() {
        cout << "Some content in parent class.";
    }
};

// derived class (child)
class MyChild: public MyClass {
};

// derived class (grandchild)
class MyGrandChild: public MyChild {
};

int main() {
    MyGrandChild myObj;
    myObj.myFunction();
    return 0;
}

//multiple inheritance
//base class
class MyClass {
    public:
        void myFunction() {
            cout << "Some content in parent class.";
        }
};

// another base class
class MyOtherClass {
    public:
        void myOtherFunction() {
            cout << "Some content in another class.";
        }
};

//derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
    return 0;
}

//access specifiers
//base class
class Employee {
    protected: // protected access specifier
        int salary;
};

//derived class
class Programmer: public Employee {
    public:
        int bonus;
        void setSalary(int s) {
            salary = s;
        }
        int getSalary() {
            return salary;
        }
};

int main() {
    Programmer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 15000;
    cout << "Salary: " << myObj.getSalary() << endl;
    cout << "Bonus: " << myObj.bonus << endl;
    return 0;
}

//polymorphism
//base class
class Animal {
    public: void animalSound() {
        cout << "The animal makes a sound" << endl;
    }
};

// derived class
class Pig : public Animal {
    public:
        void animalSound() {
            cout << "The pig says: wee wee" << endl;
        }
};

// derived class
class Dog : public Animal {
    public:
    void animalSound() {
        cout << "The dog says: bow wow" << endl;
    }
};

int main() {
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
    return 0;
}

// virtual functions
class Animal {
  public:
    virtual void sound() {
      cout << "Animal sound\n";
    }
};

class Dog : public Animal {
    public:
        void sound() override {
            cout << "Dog Barks" << endl;
        }
};

int main() {
    Animal* a;
    Dog d;
    a = &d;
    // Same as (*a).sound(); 
    a->sound(); // outputs: Dog barks 
    return 0;
}

//templates
//function template - syntax 1
template <typename T>
return_type function_name(T parameter) {
    //code
}

//eg
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add<int>(5, 3) << endl;
    cout << add<double>(2.5, 1.5) << endl;
    return 0;
}

//class template - syntax 2
template <typename T>
class ClassName {
    // members and methods using T
};

//eg
template <typename T>
class Box {
    public:
    T value;
    Box(T v) {
        value = v;
    }
    void show() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Box<int> intBox(50);
    Box<string> strBox("Hello");

    intBox.show();
    strBox.show();
    return 0;
}

template <typename T1, typename T2>
class Pair {
    public:
    T1 first;
    T2 second;

    Pair(T1 a, T2 b) {
        first = a;
        second = b;
    }

    void display() {
        cout << "First: " << first << ", Second: " << endl;
    }
};

int main() {
    Pair<string, int> person("John, 30");
    Pair<int, double> score(51, 9.5);

    person.display();
    score.display();

    return 0;
}

/*
C++ Files

The fstream library allows us to work with files.

To use the fstream library, include both the standard 
<iostream> AND the <fstream> header file:
Example
#include <iostream>
#include <fstream>

There are three classes included in the fstream library, 
which are used to create, write or read files:
Class 	Description
ofstream 	Creates and writes to files
ifstream 	Reads from files
fstream 	A combination of ofstream and ifstream: creates, 
reads, and writes to files

Create and Write To a File
To create a file, use either the ofstream or fstream class, 
and specify the name of the file.
To write to the file, use the insertion operator (<<).*/

//eg
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    //create and open a text file
    ofstream MyFile("filename.txt");

    //write to the file
    MyFile << "Files can be tricky, but it is fun enough!";

    // close the file
    MyFile.close;
}

//read a file
//eg
//create a text string, which is used to output the text file
string myText;

//read from the text file
ifstream MyReadFile("filename.txt");

//use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
    //output the text from the file
    cout << myText;
}

// close the file
MyReadFile.close();

//date and time
#include <ctime> // import the ctime library

//display current date and time
//get the timestamp for the current date and time
time_t timestamp;
time(&timestamp);

//dispplay the date and time represented by the timestamp
cout << ctime(&timestamp);

//another way to use time() function
time_t timestamp = time(NULL);

/*data types
There are two different data types used to store the date 
and time: time_t for timestamps and struct tm for datetime 
structures.
Timestamps represent a moment in time as a single number, 
which makes it easier for the computer to do calculations.

Datetime structures are structures that represent different 
components of the date and time as members. This makes it easier 
for us to specify dates. Datetime structures have the following 
members:

    tm_sec - The seconds within a minute
    tm_min - The minutes within an hour
    tm_hour - The hour within a day (from 0 to 23)
    tm_mday - The day of the month
    tm_mon - The month (from 0 to 11 starting with January)
    tm_year - The number of years since 1900
    tm_wday - The weekday (from 0 to 6 starting with Sunday)
    tm_yday - The day of the year (from 0 to 365 with 0 being 
    January 1)
    tm_isdst - Positive when daylight saving time is in effect, 
    zero when not in effect and negative when unknown

*/

//creating timestamps
//eg
struct tm datetime;
time_t timestamp;

datetime.tm_year = 2025 - 1900; //number of years since 1900
datetime.tn_mon = 12 - 1; //number of months since january
datetime. tm_mday = 17;
datetime.tm_hour = 12;
datetime.tm_min = 30;
datetime.tm_sec = 1;
//daylight savings must be pecified
// -1 uses the computer's timezone setting
datetime.tm_isdst = -1;

timestamp = mktime(&datetime);

cout << ctime(&timestamp);

//creating datetime structures
//eg
//create the datetime structure and use mktime to fill in the missing members
struct tm datetime;
datetime.tm_year = 2025 - 1900; //number of years since 1900
datetime.tn_mon = 12 - 1; //number of months since january
datetime. tm_mday = 17;
datetime.tm_hour = 0; datetime.tm_min = 30; datetime.tm_sec = 1;
datetime.tm_isdst = -1;
mktime(&datetime);

string weekdays[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};

cout << "The date is on a " << weekdays[datetime.tm_wday];

/*
The localtime() and gmtime() functions can convert timestamps 
into datetime structures.

The localtime() function returns a pointer to a structure 
representing the time in the computer's time zone.

The gmtime() function returns a pointer to a structure representing 
the time in the GMT time zone.*/

//eg
time_t timestamp = time(&timestamp);
struct tm datetime = *localtime(&timestamp);

cout << datetime.tm_hour;

//display dates
//eg
time_t timestamp = time(NULL);
struct tm datetime = *localtime(&timestamp);

cout << asctime(&datetime);

//eg
time_t timestamp = time(NULL);
struct tm datetime = *localtime(&timestamp);

char output[50];

strftime(output, 50, "%B %e, %Y", &datetime);
cout << output << endl;

strfttime(output, 50, "%I:%M:%S %p", &datetime);
cout << output << endl;

strftime(output, 50, "%m/%d/%y", &datetime);
cout << output << endl;

strftime(output, 50, "%a %b %e %H:%M:%S %Y", &datetime);
cout << output << endl;

/*
The strftime() function formats a date and writes it as a C-style 
string into a char array. It has four parameters:

    The first parameter points to the char array where the 
    formatted date will be written.
    The second parameter specifies the space available in the array.
    The third parameter allows us to choose how the date is 
    formatted using format specifiers.
    The last parameter is a pointer to the datetime structure 
    which contains the date we want to display.

The following table has some useful format specifiers. 
For a more complete list, look at the strftime() reference page.
Format Specifier 	Description 	Example
%a 	Short representation of the weekday 	Fri
%b 	Short representation of the month name 	Dec
%B 	Full representation of the month name 	December
%d 	Day of the month with leading zero 	09
%e 	Day of the month with leading spaces 	 9
%H 	24-hour format of an hour 	14
%I 	12-hour format of an hour 	02
%M 	Minutes within an hour 	30
%p 	AM or PM 	PM
%S 	Seconds within a minute 	01
%y 	2-digit year representation 	23
%Y 	4-digit year representation 	2023
*/

//measuing time
time_t now;
time_t nextyear;
struct tm datetime;

now = time(NULL);
datetime = *localtie(&now);
datetime.tm_year = datetime.tm_year +1;
datetime.tm_mon = 0;
datetime.tom_mday = 1;
datetime.tm_hour = 0; datetime.tm_min = 0; datetime.tm_sec = 0;
datetime.tm_isdst = -1;
nextyear = mktime(&datetime);

int diff - difftime(nextyear, now);

cout << diff << " seconds until next year";

//eg
clock_t before = clock();
int k = 0;
for(int i = 0; i < 100000; i++) {
    k += i;
}
clock_t duration = clock() - before;
cout << "Duration: " << (float)duration / CLOCKS_PER_SEC << " seconds;"
