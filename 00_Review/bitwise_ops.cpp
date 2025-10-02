#include <iostream>
using namespace std;

int main() {

    int a = 4, b = 8;

    // bitwise AND
    cout << "BITWISE AND: " << (6 & 10) << endl;
    
    // bitwise OR
    cout << "BITWISE OR: " << (a | b) << endl;
    
    // bitwise XOR
    cout << "BITWISE XOR: " << (a ^ b) << endl;

    // bitwise left shift
    cout << "BITWISE LEFT SHIFT: " << (10 << 2) << endl;

    // bitwise right shift
    cout << "BITWISE RIGHT SHIFT: " << (10 >> 1) << endl;


    return 0;
}