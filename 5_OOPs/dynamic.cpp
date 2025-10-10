#include <iostream>
using namespace std;

class Cricketer {
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg) {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

};


int main() {
    
    Cricketer c1("VK", 25000, 55.5);
    Cricketer* c2 = new Cricketer("RS", 18000, 48.8);

    int* ptr = new int(4);
    cout << *ptr << endl;

    cout << c1.name << " " << c1.runs << endl;
    cout << (*c2).name << " " << c2->runs << endl;
    

    return 0;
}