#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int id;
    string name;
    string surname;
    double grade;

    Student(int id, string name, string surname, double grade) {
        this->id = id;
        this->name = name;
        this->surname = surname;
        this->grade = grade;
    }
};

int main() {
    
    return 0;
}
