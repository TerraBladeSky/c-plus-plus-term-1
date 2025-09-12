#include <iostream>
#include <string>
using namespace std;

int main() {
    //real life examples
    //create variables of different data types
    int items = 50;
    double cost_per_item = 9.99;
    double total_cost = items * cost_per_item;
    char currency = '$';

    //print variables
    cout << "number of items: " << items << endl;
    cout << "cost per item: " << cost_per_item << currency << endl;
    cout << "Total cost = " << total_cost << currency << endl;

    cout << endl;

    return 0;

}