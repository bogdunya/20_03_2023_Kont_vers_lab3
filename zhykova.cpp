#include <iostream>
using namespace std;

// first commit in main (zhykova)

// second commit in main (zhykova)

void selectionSort(int arr[], int size) {
    int minIndex;

    // Traverse the array and select the minimum element
    for (int i = 0; i < size - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// first commit in zhykova

// second commit in zhykova

int main() {
    int arr[] = {5, 9, 3, 1, 8, 4, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
