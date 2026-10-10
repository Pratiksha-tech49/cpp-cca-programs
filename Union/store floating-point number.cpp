#include <iostream>
using namespace std;

union Data {
    int num;
    float value;
};

int main() {
    Data d;

    cout << "Enter a decimal number: ";
    cin >> d.value;

    cout << "Floating-point value = " << d.value;

    return 0;
}