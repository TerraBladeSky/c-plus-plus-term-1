#include <iostream>
#include <string>
using namespace std;

int main() {
	char choice;
	
	do {
	int numItems;
	double* prices = nullptr;
	double total = 0.0;
	
	while (true) {
		try {
			// step 1: ask for number of items
			cout << "Enter number of items: ";
			cin >> numItems;
			
			// check for invalid number of items
			if (numItems <= 0) {
				throw string("Number of items must be greater thn 0");
			}
			
			// step 2: dynamically create array for prices
			prices = new double[numItems];
			
			// get prices from user
			cout << "Enter prices of items: " << endl;
			for (int i = 0; i < numItems; i++) {
				cin >> prices[i];
				
				// step 3: check for negative prices and throw exception
				if (prices[i] < 0) {
					throw string("Negative price is not allowed!");
				}
				
				total += prices[i];
			}
			
			// step 4: display total price
			cout << "Total bill: " << total << endl;
			
			//clean up dynamic allocated memory
			delete[] prices;
			prices = nullptr;
			
			break; // exit loop on success
			
		} catch (const string& errorMsg)  {
			// handle neative price exception
			cout << "Error: " << errorMsg << endl;
			cout << "-----------------------------------------------------------" << endl;
			
			//clean up if memory was allocated
			if (prices != nullptr) {
				delete[] prices;
				prices = nullptr;
			}
			
			// reset total for next attempt
			total = 0.0;
			
			//loop continues, asking for input again
		}
	}
	
	//ask if user wants to repeat
	cout << "Do you want to enter another set of numbers? (y/n)" << endl;
	cin >> choice;
	
	} while (choice == 'y' || choice == 'Y'); //repeat until user chooses 'n'
	
	return 0;
	
}