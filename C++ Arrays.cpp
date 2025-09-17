#include <iostream>
#include <string>
using namespace std;

int main() {
    //arrays
    /*Arrays are used to store multiple values in a single 
    variable, instead of declaring separate variables 
    for each value. To declare an array, define the variable 
    type, specify the name of the array followed by square 
    brackets and specify the number of elements it should store*/
    string cars[4];
    
    /*We have now declared a variable that holds an array of four 
    strings. To insert values to it, we can use an array literal - 
    place the values in a comma-separated list, inside curly braces:*/
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    //To create an array of three integers, you could write:
    int myNum[3] = {10, 20, 30};

    //access the elements of an array
    /*You access an array element by referring to the index 
    number inside square brackets [].This statement accesses 
    the value of the first element in cars:*/
    //eg
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars[0];
    // outputs volvo

    //change an array
    //To change the value of a specific element, refer to the index number:
    cars[0] = "Opel";

    //eg
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cars[0] = "Opel";
    cout << cars[0]
    //Now outputs Opel instead of Volvo

    //loop through an array
    /*You can loop through the array elements with the for loop.
    The following example outputs all elements in the cars array:*/
    //create an array of strings
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    //loop through strings
    for (int i = 0; i < 5; i++) {
        cout << cars[i] << endl;
    }

    //This outputs the index of each element together with its value:
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++) {
        cout << i << cars[i] << endl;
    }    

    //And this example shows how to loop through an array of integers:
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++) {
        cout << myNumbers[i] << endl;
    }

    //for each loop
    /*There is also a "for-each loop" (introduced in C++ version 11 
    (2011)), which is used exclusively to loop through elements in 
    an array (and other data structures, like vectors and lists):*/
    //syntax
    for (type variableName : arrayName) {
        // code block to be executed
    }

    //The output all elements in an array using a "for-each loop":
    //create an array of integers
    int myNumbers[5] = {10, 20, 30, 40, 50};

    //loop through integers
    for (int num : myNumbers) {
        cout << num << endl;
    }

    //eg
    //create an array of strings
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    // loop through strings
    for (string car : cars) {
        cout << car << endl;
    }

    //omit array size
    /*In C++, you don't have to specify the size of the array. 
    The compiler is smart enough to determine the size of the 
    array based on the number of inserted values*/
    string cars[] = {"Volvo", "BMW", "Ford"}; // Three array elements

    //the example above is equal to
    string cars[3] = {"Volvo", "BMW", "Ford"}; // Also three array elements

    //omit elements on declaration
    string cars[5];
    cars[0] = "Volvo";
    cars[1] = "BMW";
    cars[2] = "Ford";
    cars[3] = "Mazda";
    cars[4] = "Tesla";

    /*Note: The example above only works when you have specified 
    the size of the array.If you don't specify the array size, 
    an error occurs:*/
    string cars[];  // Array size is not specified
    cars[0] = "Volvo";
    cars[1] = "BMW";
    cars[2] = "Ford";
    cars[3] = "Mazda";
    cars[4] = "Tesla";

    // error: array size missing in 'cars' 

    //Fixed Size (Arrays) vs. Dynamic Size (Vectors)
    /*You will often hear the terms "fixed size" and "dynamic size" 
    when discussing arrays in C++. This is because the size of an 
    array in C++ is fixed, meaning you cannot add or remove elements 
    after it is created.*/
    // An array with 3 elements
    string cars[3] = {"Volvo", "BMW", "Ford"};

    // Trying to add another element (a fourth element) to the cars array will result in an error
    cars[3] = "Tesla"; 

    //Vectors
    /*For operations that require adding and removing array elements, 
    C++ provides vectors, which are resizable arrays.The size of a 
    vector is dynamic, meaning it can grow and shrink as needed. Vectors 
    are found in the <vector> library, and they come with many useful 
    functions to add, remove and modify elements:*/
    // A vector with 3 elements
    vector<string> cars = {"Volvo", "BMW", "Ford"};

    // Adding another element to the vector
    cars.push_back("Tesla"); 

    //get the size of an array
    //To get the size of an array, you can use the sizeof() operator:
    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers);

    //result: 20

    /*Why did the result show 20 instead of 5, when the array contains 
    5 elements? It is because the sizeof() operator returns the size 
    of a type in bytes. You learned from the Data Types chapter that 
    an int type is usually 4 bytes, so from the example above, 4 x 5 
    (4 bytes x 5 elements) = 20 bytes. To find out how many elements 
    an array has, you have to divide the size of the array by the size 
    of the first element in the array:*/
    //eg
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    cout << getArrayLength;

    //result: 5

    //Loop Through an Array with sizeof()
    /*In the Arrays and Loops Chapter, we wrote the size of the array 
    in the loop condition (i < 5). This is not ideal, since it will 
    only work for arrays of a specified size. However, by using the 
    sizeof() approach from the example above, we can now make loops 
    that work for arrays of any size, which is more sustainable. 
    Instead of writing:*/
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++) {
        cout << muNymbers[i] << endl;
    }

    //It is better to write:
    //eg
    int myNumbers[5] = {10. 20, 30, 40, 50;
    for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++)} {
        cout << myNumbers[i] << endl;
    }

    //Note that, in C++ version 11 (2011), you can also use the "for-each" 
    //loop, which is even cleaner and simpler:
    //eg
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int num : myNumbers) {
        cout << num << endl;
    }

    //real life example
    /*To demonstrate a practical example of using arrays, let's create 
    a program that calculates the average of different ages*/
    // an array storing different ages
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};

    float avg, sum = 0;
    int i;

    // get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);

    // loop through the elements of the array
    for (int age : ages) {
        sum += age;
    }

    // calculate the average by dividing the sum by the length
    avg = sum / length;

    //print the average
    cout << "the average age is: " << avg << endl;

    //And in this example, we create a program that finds the lowest age among different ages:
    // An array storing different ages
    int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};

    int i;

    // Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);

    // Create a variable and assign the first array element of ages to it
    int lowestAge = ages[0];

    // Loop through the elements of the ages array to find the lowest age
    for (int age : ages) {
    if (lowestAge > age) {
        lowestAge = age;
        }
    }

    // Print the lowest age
    cout << "The lowest age is: " << lowestAge << endl;

    //multi-dimensional arrays
    /*A multi-dimensional array is an array of arrays.To declare a 
    multi-dimensional array, define the variable type, specify the 
    name of the array followed by square brackets which specify how 
    many elements the main array has, followed by another set of 
    square brackets which indicates how many elements the sub-arrays 
    have:*/
    string letters[2][4];

    /*As with ordinary arrays, you can insert values with an array 
    literal - a comma-separated list inside curly braces. In a 
    multi-dimensional array, each element in an array literal is 
    another array literal.*/
    string letters[2][4] = {
        { "A", "B", "C", "D"},
        { "E", "F", "G", "H"}
    };

    /*Each set of square brackets in an array declaration adds 
    another dimension to an array. An array like the one above 
    is said to have two dimensions. Arrays can have any number 
    of dimensions. The more dimensions an array has, the more 
    complex the code becomes. The following array has three 
    dimensions:*/
    string letters[2][2][2] = {
        {
            { "A", "B"},
            { "C", "D"}
        },
        {
            { "E", "F"},
            { "G", "H"}
        }
    };

    //Access the Elements of a Multi-Dimensional Array
    /*To access an element of a multi-dimensional array, 
    specify an index number in each of the array's dimensions.
    This statement accesses the value of the element in the 
    first row (0) and third column (2) of the letters array.*/
    //eg
    string letters[2][4] = {
        { "A", "B", "C", "D"},
        { "E", "F", "G", "H"}
    };

    cout << letters[0][2]; // outputs "C"

    //change elements in a multi-dimensilnal array
    /*To change the value of an element, refer to the index 
    number of the element in each of the dimensions:*/
    string letters[2][4] = {
        { "A", "B", "C", "D"},
        { "E", "F", "G", "H"}
    };
    letters[0][0] = "Z";

    cout << letters[0][0]; // Now outputs "Z" instead of "A"

    //Loop Through a Multi-Dimensional Array
    /*To loop through a multi-dimensional array, you need one 
    loop for each of the array's dimensions. The following example 
    outputs all elements in the letters array:*/
    string letters[2][4] = {
        { "A", "B", "C", "D"},
        { "E", "F", "G", "H"}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << letters[i][j] << endl;
        }
    }

    //This example shows how to loop through a three-dimensional array:
    string letters[2][2][2] = {
        {
            { "A", "B"},
            { "C", "D"}
        },
        {
            { "E", "F"},
            { "G", "H"}
        }
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k = 2; k++) {
                cout << letters[i][j][k] << endl;
            }
        }
    }

    //Why Multi-Dimensional Arrays?
    /*Multi-dimensional arrays are great at representing grids. 
    This example shows a practical use for them. In the following 
    example we use a multi-dimensional array to represent a small 
    game of Battleship*/
    // we put "1" to indicate there is a ship
    bool ships[4][4] = {
        { 0, 1, 1, 0},
        { 0, 0, 0, 0},
        { 0, 0, 1, 0},
        { 0, 0, 1, 0}
    };

    // keep track of how many hits the player has and how many turns they have played in these variables
    int hits = 0;
    int numberOfTurns = 0;

    // allow the player to keep going until they have hit all four ships
    whiile (hits < 4) {
        int row, column;

        cout << "selecting coordinates" << endl;

        // ask the player for a row
        cout << "choose a row number between 0 and 3: ";
        cin >> column;

        // ask the player for a column
        cout << "choose a column number between 0 and 3: ";
        cin >> column;

        // check if a ship exists in those coordinates
        if (ships[row][column]) {
            // if the player hit a ship, remove it by setting the value to zero
            ships[row][column] = 0;

            // increase the hit counter
            hits++;

            // tell the player that they have hit a ship and how many ships are left
            cout << "Hit! " << (4-hits) << " left.\n\n";
        } else {
            // tell the player that they missed
            cout << "miss\n\n";
        }

        // count ow many turns the player has taken
        numberOfTurns++;
    }

    cout << "Victory" << endl;
    cout << "You won in " << numberOfTurns << " turns";

    cout << endl;
    
    //end

    cout << endl;

    return 0;

}