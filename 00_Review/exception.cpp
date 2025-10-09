#include <iostream>
using namespace std;

int main() {

    try {
        int no_1 = 1;
        int no_2 = 0;

        if (no_1 == 0) {
            throw no_1;
        }
    }
    catch (int e) {
        cout << "Exception Found: " << e << endl;
    }


    return 0;
}