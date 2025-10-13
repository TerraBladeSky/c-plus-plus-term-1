#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	do {
		try {
			//logic
			if(name.empty()) {
				throw invalid.argument("Name can't be empty'");
			}
			//logic
		}catch(invalid argument. &e) {
			cout << "Error: " << e.what() << endl;
		}
	} while(condition)
	
	string a = "Hello", b = "World";
	
	cout << a + b; // Hello World
	
	cout << a.length(); // 5
	
	cout << a[0]; // prints H
	
	cout << a.substr(0, 4); // Hello
	
	cout << a.find("b"); // gets position 3
	
	return 0;
}