#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

float my_max(float a, float b) {
    return (a >= b) ? a : b;
}

float my_min(float a, float b) {
    return (a < b) ? a : b;
}

int main() {
    int arr[] = {5, 3, 10};
    int n = 3;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    float kmin = static_cast<float>(INT_MIN);
    float kmax = static_cast<float>(INT_MAX);
    bool flag = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] >= arr[i + 1]) {
            kmin = my_max(kmin, (arr[i] + arr[i + 1]) / 2.0f);
        } else {
            kmax = my_min(kmax, (arr[i] + arr[i + 1]) / 2.0f);
        }

        if (kmin > kmax) {
            flag = false;
            break;
        }
    }

    if (!flag) {
        cout << -1;
    } else if (kmin == kmax) {
        if (kmin - static_cast<int>(kmin) == 0) {
            cout << "There is only one value of k: " << kmin;
        } else {
            cout << -1;
        }
    } else {
        if (kmin - static_cast<int>(kmin) > 0) {
            kmin = static_cast<int>(kmin) + 1;
        }
        cout << "Range of K is [" << kmin << ", " << static_cast<int>(kmax) << "]";
    }

    return 0;
}
