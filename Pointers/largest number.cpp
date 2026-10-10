#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int *p = &a;
    int *q = &b;

    if (*p > *q) {
        cout << "Largest number = " << *p;
    } else if (*q > *p) {
        cout << "Largest number = " << *q;
    } else {
        cout << "Both numbers are equal";
    }

    return 0;
}