#include <iostream>
using namespace std;

/* Namespaces: are used to group a set of functions or
* classes that perform a unique action.
*/

namespace robot {
    void process(void) {
        cout << "Processing by Robot" << endl;
    }
}

namespace machine {
    void process(void) {
        cout << "Processing by Machine" << endl;
    }
}

int main() {

    robot::process();
    machine::process();


    return 0;
}