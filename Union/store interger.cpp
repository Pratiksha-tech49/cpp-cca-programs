#include <iostream>
using namespace std;

union Data {
    int num;
    float value;
};

int main() {
    Data d;

    cout << "Enter an integer: ";
    cin >> d.num;

    cout << "Integer value = " << d.num;

    return 0;
}