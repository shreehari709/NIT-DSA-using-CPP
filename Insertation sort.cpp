#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1, j; i < n; i++) 
        for (int key = arr[i], j = i - 1; j >= 0 && arr[j] > key; j--) 
            arr[j + 1] = arr[j], arr[j] = key;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6}, n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    for (int x : arr) cout << x << " ";
}
