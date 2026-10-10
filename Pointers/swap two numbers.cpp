#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int *p = &a;
    int *q = &b;

    int temp = *p;
    *p = *q;
    *q = temp;

    cout << "After swapping:\n";
    cout << "First number = " << a << endl;
    cout << "Second number = " << b;

    return 0;
}