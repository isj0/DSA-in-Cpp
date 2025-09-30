#include <iostream>
using namespace std;


int sum_of_digits(int n) {
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        n /= 10;
        sum += digit;
    }

    return sum;
}
int main() {

    int num = 145;
    cout << "Sum of digits of " << num << " is: " << sum_of_digits(num) << endl;
    
    return 0;
}