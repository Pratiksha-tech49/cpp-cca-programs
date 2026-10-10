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
        cout << "Enter name: ";
        cin >> ws;
        getline(cin, s[i].name);

        cout << "Enter marks: ";
        cin >> s[i].marks;
    }

    int top = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }

    cout << "\nTop Scoring Student\n";
    cout << "Name: " << s[top].name << endl;
    cout << "Marks: " << s[top].marks;

    return 0;
}