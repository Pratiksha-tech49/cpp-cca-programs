#include <iostream>
using namespace std;

union Data {
    int num;
    float value;
    char ch;
};

int main() {
    Data d;

    cout << "Size of union = " << sizeof(d) << " bytes\n";

    cout << "Address of integer member = " << (void*)&d.num << endl;
    cout << "Address of float member = " << (void*)&d.value << endl;
    cout << "Address of character member = " << (void*)&d.ch << endl;

    return 0;
}