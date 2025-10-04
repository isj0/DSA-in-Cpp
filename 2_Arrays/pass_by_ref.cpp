#include <iostream>
using namespace std;

void change_arr(int arr[], int size) {
    cout << "In function\n";
    for (int i = 0; i < size; i++) {
        arr[i] = 2 * arr[i];
    }
}

int main() {

    int arr[] = {1, 2, 3};

    change_arr(arr, 3);

    cout << "in main" << endl;
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    
    return 0;
}