#include <iostream>
#include <string>
using namespace std;

int main() {
    //structures
    //create a structure
    struct {             // Structure declaration
        int myNum;         // Member (int variable)
        string myString;   // Member (string variable)
    } myStructure;       // Structure variable 

    //access structure members
    //create a structure variable called myStructure
    struct {
        int myNum;
        string myString;
    } myStructure;

    //Assign values to members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    //print members of myStructure
    cout << myStructure.myNum << endl;
    cout << myStructure.myString << endl;

    //other structure in multiple variables
    struct {
        int myNum; 
        string myString;
    } myStruct1, myStruct2, mystruct3; // multiple structure variables seperated with commas

    //eg
    struct {
        string brand;
        string mode;
        int year;
    } myCar1, myCar2; // we can add variables by separating them with a comma here

    // put data into the first structure
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;
    
    //put the data into the second structure
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    //print the structure members
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << endl;
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl;

    //named structures
    struct car { // this structure is now named "car"
        string brand;
        string model;
        int year;
    };

    //declareing variables that uses the structure
    car myCar1;

    //now the structure can be reused anywhere by using car as the data type
    //eg
    //declare a structure named "car"
    struct car {
        string brand;
        string model;
        int year;
    };

    int main() {
        // Create a car structure and store it in myCar1;
        car myCar1;
        myCar1.brand = "BMW";
        myCar1.model = "X5";
        myCar1.year = 1999;
        
        // Create another car structure and store it in myCar2;
        car myCar2
        myCar2.brand = "Ford";
        myCar2.model = "Mustang";
        myCar2.year = 1969;

        //print the structure members
        cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << endl;
        cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl;

        cout << endl;

        return 0;
    }

    //challenge task
    //define the structure
    struct Student {
        string name;
        int age;
        char grade;
    };

    int main() {
        //create one variable of the structure
        Student s1;

        //assign values to its members
        s1.name = "Liam";
        s1.age = 35;
        s1.grade = 'A';

        //print the values
        cout << "Name: " << s1.name << endl;
        cout << "Age: " << s1.age << endl;
        cout << "Grade: " << s1.grade << endl;

        return 0;
    }

    //end

    cout << endl;

    return 0;

}