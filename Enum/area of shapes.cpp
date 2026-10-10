#include <iostream>
using namespace std;

enum Shape {
    CIRCLE = 1, RECTANGLE, SQUARE
};

int main() {
    int choice;
    double r, length, breadth, side;

    cout << "1. Circle\n2. Rectangle\n3. Square\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case CIRCLE:
            cout << "Enter radius: ";
            cin >> r;
            if (r < 0) {
                cout << "Invalid radius";
                return 0;
            }
            cout << "Area = " << 3.14159 * r * r;
            break;

        case RECTANGLE:
            cout << "Enter length and breadth: ";
            cin >> length >> breadth;
            if (length < 0 || breadth < 0) {
                cout << "Invalid dimensions";
                return 0;
            }
            cout << "Area = " << length * breadth;
            break;

        case SQUARE:
            cout << "Enter side: ";
            cin >> side;
            if (side < 0) {
                cout << "Invalid side";
                return 0;
            }
            cout << "Area = " << side * side;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}