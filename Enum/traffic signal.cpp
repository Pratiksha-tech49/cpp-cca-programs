#include <iostream>
using namespace std;

enum Signal {
    RED = 1, YELLOW, GREEN
};

int main() {
    int choice;
    cout << "1. Red\n2. Yellow\n3. Green\n";
    cout << "Enter signal choice: ";
    cin >> choice;

    if (choice < 1 || choice > 3) {
        cout << "Invalid choice";
        return 0;
    }

    Signal s = static_cast<Signal>(choice);

    switch (s) {
        case RED:
            cout << "Stop";
            break;
        case YELLOW:
            cout << "Get Ready";
            break;
        case GREEN:
            cout << "Go";
            break;
    }

    return 0;
}