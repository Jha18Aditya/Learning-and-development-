#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int element, position;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position to insert the element (0 to " << n << "): ";
    cin >> position;

    if (position < 0 || position > n) {
        cout << "Invalid position!" << endl;
    } else {
        for (int i = n; i > position; i--) {
            arr[i] = arr[i - 1];
        }

        arr[position] = element;
        n++;

        cout << "Array after insertion: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
