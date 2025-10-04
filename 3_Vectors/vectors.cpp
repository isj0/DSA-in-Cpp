#include <iostream>
#include <vector>

using namespace std;

int main() {

    // vector<int> vec;
    // cout << vec[0];

    // vector<int> vec = {1, 2, 3};
    // cout << vec[0] << endl;

    vector<int> vec (5, 0);
    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    // cout << vec[3] << endl;

    vector<char> vec2 = {'a', 'b', 'c', 'd'};

    for (char val : vec2) {
        cout << val << endl;
    }





    return 0;

}