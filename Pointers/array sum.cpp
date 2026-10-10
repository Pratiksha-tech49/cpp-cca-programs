#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid size";
        return 0;
    }

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    int *ptr = arr;

    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    cout << "Sum of array elements = " << sum;

    return 0;
}