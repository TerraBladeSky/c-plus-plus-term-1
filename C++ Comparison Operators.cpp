#include <iostream>
#include <string>
using namespace std;

int main() {
    /* Comparison operators are used to compare two values (or variables). This is important in programming, because it helps us to find answers and make decisions.
    The return value of a comparison is either 1 or 0, which means true (1) or false (0). These values are known as Boolean values, and you will learn more about them in the Booleans and If..Else chapter.
    In the following example, we use the greater than operator (>) to find out if 5 is greater than 3*/
    int x = 5;
    int y = 3;
    cout << (x > y); // returns 1 (true) because 5 is greater than 3

    /*A list of all comparison operators:
    Operator 	Name 	                    Example 	Try it
    == 	        Equal to 	                x == y 	
    != 	        Not equal 	                x != y 	
    > 	        Greater than 	            x > y 	
    < 	        Less than 	                x < y 	
    >= 	        Greater than or equal to 	x >= y 	
    <= 	        Less than or equal to 	    x <= y*/

    /*Logical Operators

    As with comparison operators, you can also test for true (1) or false (0) values with logical operators.

    Logical operators are used to determine the logic between variables or values:
    Operator 	Name 	Description 	Example 	Try it
    &&  	Logical and 	Returns true if both statements are true 	x < 5 &&  x < 10 	
    ||  	Logical or 	Returns true if one of the statements is true 	x < 5 || x < 4 	
    ! 	Logical not 	Reverse the result, returns false if the result is true 	!(x < 5 && x < 10)*/

    cout << endl;

    return 0;



}