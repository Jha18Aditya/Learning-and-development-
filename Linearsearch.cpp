#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int element, found = 0;

    cout << "Enter the element to search: ";
    cin >> element;

    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            cout << "Element found at position: " << i << endl;
            found = 1;
            break;
        }
    }

    if (!found) {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
