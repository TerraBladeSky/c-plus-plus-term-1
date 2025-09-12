#include <iostream>
#include <string>
using namespace std;

int main() {
    //Strings
    string greeting = "Hello";

    // string concentration
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    cout << fullName;

    cout << endl;

    //or
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName;
    cout << fullName;

    cout << endl;

    //append
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName;

    cout << endl;

    //adding numbers and strings
    //If you add two numbers, the result will be a number
    int x = 10;
    int y = 20;
    int z = x + y;      // z will be 30 (an integer) 

    cout << endl;

    //If you add two strings, the result will be a string concatenation
    string x = "10";
    string y = "20";
    string z = x + y;   // z will be 1020 (a string)

    cout << endl;

    //eg
    string a = "10";
    int b = 20;
    string c = a + b; 
    //If you try to add a number to a string, an error occurs

    cout << endl;

    //string length
    //To get the length of a string, use the length() function
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "the length of the txt string is: " << txt.length();

    cout << endl;

    /*You might see some C++ programs that use the size() 
    function to get the length of a string. This is just an alias of length(). 
    It is completely up to you if you want to use length() or size()*/
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.size(); 

    cout << endl;

    //access strings
    //This example prints the first character in myString
    string myString = "Hello";
    cout << myString[0];
    // Outputs H

    cout << endl;

    //This example prints the second character in myString
    string myString = "Hello";
    cout << myString[1];
    // Outputs e

    cout << endl;

    //Change String Characters
    string myString = "Hello";
    myString[0] = 'J';
    cout << myString;
    //outputs Jello instead of Hello

    cout << endl;

    //The at() function
    string myString = "Hello";
    cout << myString; //outputs Hello

    cout << myString.at(0); //first character
    cout << myString.at(1); //second character
    cout << myString.at(myString.length() - 1); // last character

    myString.at(0) = 'J';
    cout << myString; // outputs Jello

    cout << endl;

    //Strings - Special Characters
    /*Because strings must be written within quotes, 
    C++ will misunderstand this string, and generate an error:
    string txt = "We are the so-called "Vikings" from the north.";
    The solution to avoid this problem, is to use the backslash 
    escape character.
    The backslash (\) escape character turns special characters into 
    string characters*/

    /*Escape character 	Result 	Description
    \' 	                ' 	    Single quote
    \" 	                " 	    Double quote
    \\ 	                \ 	    Backslash*/

    /*The sequence \'  inserts a single quote in a string:
    string txt = "It\'s alright.";*/

    /*The sequence \\  inserts a single backslash in a string:
    string txt = "The character \\ is called backslash.";*/

    /*Other popular escape characters in C++ are:
    Escape Character 	Result 	Try it
    \n 	                New Line 	
    \t 	                Tab*/
    
    //user input strings
    string firstName;
    cout << "Type your first name: ";
    cin >> firstName; // get user input from keyboard
    cout << "Your name is: " << firstName;

    //Type your first name: John
    // Your name is: John

    cout << endl;

    /*However, cin considers a space (whitespace, tabs, etc) as a 
    terminating character, which means that it can only store a single 
    word (even if you type many words)*/
    string fullName;
    cout << "Type your full name: ";
    cin >> fullName;
    cout << "Your name is: " << fullName;

    // Type your full name: John Doe
    // Your name is: John

    cout << endl;

    /*From the example above, you would expect the program to print 
    "John Doe", but it only prints "John".
    That's why, when working with strings, we often use the getline() 
    function to read a line of text. It takes cin as the first parameter, 
    and the string variable as second*/

    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;

    // Type your full name: John Doe
    // Your name is: John Doe 

    cout << endl;

    //C-Style Strings
    string greeting1 = "Hello"; //regular string
    char greeting2[] = "Hello"; // C-Style String 
                                //(an array of characters)
    cout << endl;

    /*Note: It is more convenient to work with the standard string type, 
    rather than C-style strings. However, one reason some users continue 
    to use C-style strings is that they have access to functions from the 
    C standard library. A list of all C-style string functions, can be 
    found in our CString Functions Reference.*/

    //end

    cout << endl;

    return 0;

}