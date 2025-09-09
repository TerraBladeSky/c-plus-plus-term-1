// instructions: your program must: use a cin to collect the following information: full name, age, height in cm, do you love programming?

//import packages or libraries
#include <iostream>
#include <string>
using namespace std;
//Start of the logic/algorithm
int main() {
	string fullName;
	int age;
	double height;
	bool loveprogramming;
	
	//Prompt
	cout << "=== User information Collection ===" << endl << endl;
	
	//Give full name
	cout << "Enter your full name: ";
	getline(cin, fullName);
	
	//Give age	
	cout << "Enter your age: ";
	cin >> age;
	
	//Give height
	cout << "Enter your height in cm? ";
	cin >> height;
	
	//Clear input
	cin.ignore();
	
	//Get programming preference
	cout << "Do you love programming (true/false)? ";
	cin >> boolalpha >> loveprogramming;
	
	//Display collected data
	cout << endl << "===Information Summary ===" << endl;
	cout << "Hi, I'm " << fullName << endl;
	cout << "I'm " << age << " years old and " << height << " cm tall" << endl;
	cout << "Do I love programming? " << boolalpha << loveprogramming << endl;
	
	return 0;
}