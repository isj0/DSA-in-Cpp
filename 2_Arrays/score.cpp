#include <iostream>
using namespace std;

int main() {

    // int scores[5] = {99, 100, 81, 94, 75};
    // float price[] = {100.99, 21.33, 45.67};    

    // cout << price[0] << endl;
    // cout << price[2] << endl;
    // cout << price[1] << endl;
    // cout << price[-1] << endl;

    // get the size of array
    // sizeof will give you the entire size of the array
    // to get the number of elements (length) divide the total size of array by size of an int
    
    int scores[5];
    int sz = sizeof(scores)/sizeof(int);
    cout << "Length of scores array: " << sz << endl;

    for (int i = 0; i < sz; i++) {
        cout << "Enter score " << i << ": ";
        cin >> scores[i];
    }
    
    for (int i = 0; i < sz; i++) {
        cout << "Score " << i << ": " << scores[i] << endl;
    }

    return 0;
}