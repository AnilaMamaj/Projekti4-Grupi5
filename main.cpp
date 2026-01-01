#include <iostream>
#include <string>
#include <vector>

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


void addStudent(vector<Student>& students) {
    int id;
    string name, surname;
    double grade;

    cout << "Enter ID: ";
    cin >> id;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter surname: ";
    cin >> surname;

    cout << "Enter grade: ";
    cin >> grade;

    students.push_back(Student(id, name, surname, grade));
    cout << "Student added successfully.\n";
}

int main() {
    
    return 0;
}
