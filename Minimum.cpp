#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 5, 2, 8, 1, 4};
    int minElement = arr[0];

    for (int i = 1; i < 6; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    cout << "Minimum element in the array: " << minElement << endl;

    return 0;
}
