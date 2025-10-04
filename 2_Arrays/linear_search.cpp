#include <iostream>
using namespace std;

int linear_search(int arr[], int sz, int target) {
    for (int i = 0; i < sz; i++) {
        if (arr[i] == target) {     // FOUND
            return i;
        }
    }

    return -1;      // FOUND
}
int main() {

    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int sz = 7;
    int target = 5;

    cout << linear_search(arr, sz, target) << endl;

    return 0;
}