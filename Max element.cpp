#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 5, 37, 9, 2};
       int max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        }

    cout << "Maximum element: " << max << endl;
    return 0;
}
        

