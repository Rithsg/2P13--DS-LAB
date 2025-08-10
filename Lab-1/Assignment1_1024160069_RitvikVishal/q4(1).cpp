#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int i = 0, j = n - 1;
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    reverseArray(arr, n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";
    return 0;
}

