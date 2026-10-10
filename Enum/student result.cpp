#include <iostream>
using namespace std;

enum Grade {
    FAIL, C, B, A, A_PLUS
};

int main() {
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks";
        return 0;
    }

    Grade g;

    if (marks < 40)
        g = FAIL;
    else if (marks < 60)
        g = C;
    else if (marks < 75)
        g = B;
    else if (marks < 90)
        g = A;
    else
        g = A_PLUS;

    switch (g) {
        case FAIL: cout << "Grade: Fail"; break;
        case C: cout << "Grade: C"; break;
        case B: cout << "Grade: B"; break;
        case A: cout << "Grade: A"; break;
        case A_PLUS: cout << "Grade: A+"; break;
    }

    return 0;
}