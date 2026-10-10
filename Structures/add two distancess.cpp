#include <iostream>
using namespace std;

struct Distance {
    int metres;
    int centimetres;
};

int main() {
    Distance d1, d2, result;

    cout << "Enter first distance (metres centimetres): ";
    cin >> d1.metres >> d1.centimetres;

    cout << "Enter second distance (metres centimetres): ";
    cin >> d2.metres >> d2.centimetres;

    if (d1.metres < 0 || d1.centimetres < 0 ||
        d2.metres < 0 || d2.centimetres < 0) {
        cout << "Invalid distance";
        return 0;
    }

    int totalCm = d1.metres * 100 + d1.centimetres
                + d2.metres * 100 + d2.centimetres;

    result.metres = totalCm / 100;
    result.centimetres = totalCm % 100;

    cout << "Total distance = " << result.metres
         << " metres and " << result.centimetres
         << " centimetres";

    return 0;
}