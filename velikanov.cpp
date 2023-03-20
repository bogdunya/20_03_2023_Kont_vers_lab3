#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int x) {
    // Velikanov commit 1
    if (high >= low) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] > x) {
            return binarySearch(arr, low, mid - 1, x);
        } else {
            return binarySearch(arr, mid + 1, high, x);
        }
    }
    return -1;
    // Velikanov commit 2
}

int main() {
    // main commit 1
    int arr[] = { 2, 5, 8, 12, 16, 23, 38, 56, 72, 91 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 23;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;
    return 0;
    // main commit 2
}
