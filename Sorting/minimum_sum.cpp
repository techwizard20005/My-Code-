#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int arr[] = {1, 3, 2, 4, 5};
    int n = 5;
    int minsum = INT_MAX; // Initialize minsum with a large value

    for (int i = 0; i < n-1; i++) {
        int min1 = INT_MAX, min2 = INT_MAX;
        int mindex1, mindex2;

        // Find the indices of the two smallest values in the remaining part of the array
        for (int j = i; j < n; j++) {
            if (arr[j] < min1) {
                min2 = min1;
                mindex2 = mindex1;
                min1 = arr[j];
                mindex1 = j;
            } else if (arr[j] < min2) {
                min2 = arr[j];
                mindex2 = j;
            }
        }

        // Calculate the sum of the two smallest values found
        int currentSum = arr[mindex1] + arr[mindex2];

        // Update minsum if the current sum is smaller
        if (currentSum < minsum) {
            minsum = currentSum;
        }
    }

    cout << "Minimum sum of two elements: " << minsum << endl;

    return 0;
}
