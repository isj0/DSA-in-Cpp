#include <iostream>
using namespace std;

// Car class
class Car {
    public:
        string name;
        int price;
        int seats;
        string type; 

    Car(int p, string n, string t, int s){
        name = n;
        price = p;
        type = t;
        seats = s;
    }
};


void print_info(Car c) {
    cout << c.name << "; " << c.price << "; " << c.type << endl;
}

void change(Car& c) {
    c.name = "Unkown car";
}


int main() {

    Car c1(40000, "honda", "Sedan", 5);
    // c1.name = "Honda City";
    // c1.price = 40000;
    // c1.seats = 5;
    // c1.type = "Sedan";

    print_info(c1);
    change(c1);
    print_info(c1);

    // Car c2;
    // c2.name = "Dodge";
    // c2.price = 50000;
    // c2.seats = 5;
    // c2.type = "HatchBack";

    // Car c3;
    // c3.name = "Acura";
    // c3.price = 70000;
    // c3.seats = 4;
    // c3.type = "Coupe";

    // print_info(c1);
    // print_info(c2);
    // print_info(c3);

    // cout << c1.name << endl;
    // cout << c1.price << endl;
    // cout << c1.type << endl;
    // cout << endl;
    // cout << c2.name << endl;
    // cout << c2.price << endl;
    // cout << c2.type << endl;


    return 0;
}