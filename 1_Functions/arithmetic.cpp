#include<iostream>

using namespace std;

// sum of two numbers,
// Similarily you can create functions for subtraction, product and division etc.
int sum(double x, double y) {
    //processing
    double result = x + y;
    return result;
}

// function to greet user
void greet(string name) {
    cout << "Hello " << name << " are you having fun ?" << "\n";
}

// function to find min
int min_of_two(int a, int b) {
    if (a < b) {
        return a;
    }
    else return b;
}

// calculate the sum of N numbers
int sum_of_N(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

// calculate N factorial
int factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}


int main() {

    greet("kid");
    int ans = sum(10, 5);
    cout << ans << endl;

    cout << "minimum = " << min_of_two(5, 3) << endl;

    cout << "Sum of 1 to N: " << sum_of_N(6) << endl;

    cout << "Factorial of N: " << factorial(5) << endl;

    return 0;
}