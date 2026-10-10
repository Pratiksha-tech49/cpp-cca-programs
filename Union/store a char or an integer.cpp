#include <iostream>
using namespace std;

union Data {
    char ch;
    int num;
};

int main() {
    Data d;
    int choice;

    cout << "1. Store a character\n";
    cout << "2. Store an integer\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter a character: ";
        cin >> d.ch;
        cout << "Character = " << d.ch;
    } else if (choice == 2) {
        cout << "Enter an integer: ";
        cin >> d.num;
        cout << "Integer = " << d.num;
    } else {
        cout << "Invalid choice";
    }

    return 0;
}