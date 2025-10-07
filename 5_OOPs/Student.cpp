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

};

int main() {
    
    Student s1;
    s1.name = "Sunny";
    //s1.rno = 101;
    cout << "Enter your student id: ";
    cin >> s1.rno;
    s1.gpa = 8.2;

    Student s2;
    s2.name = "Zero";
    s2.rno = 102;
    s2.gpa = 8.6;

    cout << s1.name << endl;



    return 0;
}