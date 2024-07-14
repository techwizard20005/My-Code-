#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main() {
    int arr[] = {5, 3, 10, 3};
    int n = 4;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    float kmin = static_cast<float>(INT_MIN);
    float kmax = static_cast<float>(INT_MAX);

    for (int i = 0; i < n - 1; i++) {
        float mid = (arr[i] + arr[i + 1]) / 2.0f;
        if (arr[i] >= arr[i + 1]) {
            kmin = max(kmin, mid);
        } else {
            kmax = min(kmax, mid);
        }
        if (kmin > kmax) {
            cout << -1;
            return 0;
        }
    }

    if (kmin == kmax) {
        cout << (kmin == static_cast<int>(kmin) ? "There is only one value of k: " + to_string(kmin) : "-1");
    } else {
        if (kmin > static_cast<int>(kmin)) {
            kmin = static_cast<int>(kmin) + 1;
        }
        cout << "Range of K is [" << kmin << ", " << static_cast<int>(kmax) << "]";
    }

    return 0;
}
