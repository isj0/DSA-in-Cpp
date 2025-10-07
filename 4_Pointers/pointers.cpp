#include <iostream>
using namespace std;

int main() {
    
    // What is pointer?
    // data type that holds the address of other datatypes

    int a = 3;
    int* b = &a;
    // & - address of operator
    // * - value at / deference operator
    
    cout << "The address of a: " << &a << endl;
    cout << "The address of a: "<< b << endl;

    cout << "The value at address " << b  << " is: "<< *b << endl; 

    return 0;
}