#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    string usn;
    float marks;
};

int main() {
    Student s;

    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter USN: ";
    getline(cin, s.usn);

    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nStudent Details\n";
    cout << "Name: " << s.name << endl;
    cout << "USN: " << s.usn << endl;
    cout << "Marks: " << s.marks;

    return 0;
}