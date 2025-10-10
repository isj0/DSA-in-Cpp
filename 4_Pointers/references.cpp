#include <iostream>
using namespace std;

int main() {

    // A reference variable is alias - & operator
    // both food and meal refer to the same memory location
    // changing one effects ther other
    string food = "Pizza";      // variable
    string &meal = food;         // reference to the variable

    cout << food << "\n";
    cout << meal << endl;

    meal = "Burger";

    cout << food << "\n";
    cout << meal << endl;

    // get the address of the variable
    cout << &food << endl;

    return 0;
}

