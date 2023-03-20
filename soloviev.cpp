#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, min, max;//переменные
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // начальное значение для min и max
    min = arr[0];
    max = arr[0];

    // сравниваем каждый элемент массива с текущим min и max
        if (arr[i] < min) {//проход по всем элементам
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "The smallest element is: " << min << endl;
    cout << "The largest element is: " << max << endl;

    return 0;
}
