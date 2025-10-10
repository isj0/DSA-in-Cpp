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

void change(Cricketer* c) {
    // (*c).avg = 77.2;
    c->avg = 79;
}

int main() {
    
    Cricketer c1("VK", 25000, 55.5);
    cout << c1.avg << endl;
    change(&c1);
    cout << c1.avg << endl;




    // Cricketer c2("RS", 18000, 49.9);

    Cricketer* p1 = &c1;
    cout << (*p1).name << endl;
    cout << p1->runs << endl;
    p1->avg = 77.5;
    cout << (*p1).avg << endl;

    return 0;
}