#include <iostream>
using namespace std;

int sum(int a, int b) {
    a = a + 10;
    b = b + 10;

    return a+b;
}

// primitive data types ar always pass by value
int change_x(int x) {
    x = 2 * x;
    cout << "value of x in change_x: "<< x << endl;

    return x;
}
int main() {

    int a = 5, b = 4;

    cout << "Sum: " << sum(a, b) << endl;

    int x = 5;
    change_x(x);

    cout << "value of X in main: " << x << endl;

    return 0;
}