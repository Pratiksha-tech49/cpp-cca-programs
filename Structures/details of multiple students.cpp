#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    float marks;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number";
        return 0;
    }

    Student s[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> ws;
        getline(cin, s[i].name);

        cout << "Enter marks: ";
        cin >> s[i].marks;
    }

    cout << "\nStudent Records\n";
    for (int i = 0; i < n; i++) {
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }

    return 0;
}