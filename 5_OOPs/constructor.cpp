#include <iostream>
using namespace std;

// Student is the new data type
class Student {
public:

    string name;
    int rno;
    float gpa;
    int age;
    int scores[5];

    // Constructor - parameterized
    Student(string s, int r) {
        name = s;
        rno = r;
    }

    // Constructor - parameterized
    Student(string s, int r, float g) {
        name = s;
        rno = r;
        gpa = g;
    }

    // Constructor - default
    Student() {

    }

};

int main() {
    
    Student s1("demo", 101, 8.6);

    Student s2;
    s2.name = "Nimi";
    s2.rno = 102;
    s2.gpa = 8.6;

    Student s3("nemo", 103);
    s3.gpa = 7.6;

    cout << s1.name << endl;
    cout << s2.name << endl;
    cout << s3.name << endl;

    Student s4 = s1;
    s4.name = "batman";

    cout << s4.name << endl;

    Student s5(s2);
    cout << s5.name << endl;
    s5.name = "Superman";
    cout << s5.name << endl;
    
    return 0;
}