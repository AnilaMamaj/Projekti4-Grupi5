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

void searchStudentById(const vector<Student>& students) {
    int id;
    cout << "Enter student ID to search: ";
    cin >> id;

    for (const auto& s : students) {
        if (s.id == id) {
            cout << "ID: " << s.id << endl;
            cout << "Name: " << s.name << endl;
            cout << "Surname: " << s.surname << endl;
            cout << "Grade: " << s.grade << endl;
            return;
        }
    }

    void deleteStudentById(vector<Student>&students) {
        int id;
        cout << "Enter student ID to delete: ";
        cin >> id;

        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->id == id) {
                students.erase(it);
                cout << "Student deleted successfully.\n";
                return;
            }
        }

int main() {
    
    return 0;
}
