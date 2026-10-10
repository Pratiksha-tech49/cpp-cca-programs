#include <iostream>
using namespace std;

enum Day {
    Monday = 1, Tuesday, Wednesday, Thursday,
    Friday, Saturday, Sunday
};

int main() {
    int choice;
    cout << "Enter day number (1-7): ";
    cin >> choice;

    if (choice < 1 || choice > 7) {
        cout << "Invalid day number";
        return 0;
    }

    Day d = static_cast<Day>(choice);

    switch (d) {
        case Monday: cout << "Monday"; break;
        case Tuesday: cout << "Tuesday"; break;
        case Wednesday: cout << "Wednesday"; break;
        case Thursday: cout << "Thursday"; break;
        case Friday: cout << "Friday"; break;
        case Saturday: cout << "Saturday"; break;
        case Sunday: cout << "Sunday"; break;
    }

    return 0;
}