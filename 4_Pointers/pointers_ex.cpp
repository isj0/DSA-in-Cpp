#include <iostream>
using namespace std;

// A pointer is a variable that store the memory address as its value
// A pointer variable points to a datatype of same type and 
// is created with the * operator
int main() {

    string food = "Pizza";
    string* ptr = &food;    // a pointer variable with the name ptr, that stores address of food

    cout << food << endl;
    cout << &food << endl;      // memory address of food
    cout << ptr << endl;        // memory adress of food with the pointer

    cout << *ptr << endl;       // derefrence operator - output value of food with pointer

    // Change the value of the pointer
    *ptr = "Hamburger";
    cout << *ptr << endl;
    cout << food << endl;

    return 0;
}