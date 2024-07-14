#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 0, 1, 2, 0, 0, 4, 0, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] == 0 && arr[j + 1] != 0) { // Swap if current is 0 and next is non-zero
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


