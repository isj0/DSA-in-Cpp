#include <iostream>
#include <vector>
using namespace std;

int main() {

    // vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    vector<char> vec;

    vec.push_back('z');
    vec.push_back('a');
    vec.push_back('v');
    vec.push_back('c');

    cout << vec.front() << endl;
    cout << vec.back() << endl;
    
    cout << "Size: " << vec.size() << endl;

    cout << vec.at(2) << endl;

    //     for (char val : vec) {
    //         cout << val << endl;
    //     }


    // vec.pop_back();

    // cout << "Size: " << vec.size() << endl;

    // for (char val : vec) {
    //     cout << val << endl;
    // }

    return 0;
}