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

    void print_info() {
    cout << this->name << ", " << this->runs << ", " << this->avg << endl;
    }

    int matches() {
        return (this->runs)/(this->avg);
    }
};


int main() {
    
    Cricketer c1("VK", 25000, 55.5);
    Cricketer c2("RS", 18000, 49.9);

    c1.print_info();
    c2.print_info();

    cout << c1.matches() << endl;
    cout << "Matches played: " << c2.matches() << endl;

    return 0;
}