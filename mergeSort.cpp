#include<iostream>
using namespace std;

void conquer(int arr[], int low, int mid, int hi) {
    int size = hi - low + 1;
    int merger[size]; 
    int idx1 = low, idx2 = mid + 1, x = 0; 


    while (idx1 <= mid && idx2 <= hi) {
        if (arr[idx1] <= arr[idx2]) {
            merger[x++] = arr[idx1++];
        } else {
            merger[x++] = arr[idx2++];
        }
    }

    
    while (idx1 <= mid) {
        merger[x++] = arr[idx1++];
    }

    while (idx2 <= hi) {
        merger[x++] = arr[idx2++];
    }

 
    for (int i = 0, j = low; i < size; i++, j++) {
        arr[j] = merger[i];
    }
}

void divide(int arr[], int low, int hi) {
    if (low >= hi) {
        return;
    }

    int mid = low + (hi - low) / 2;
    divide(arr, low, mid);
    divide(arr, mid + 1, hi);
    conquer(arr, low, mid, hi);
}

int main() {
    int arr[] = {5, 1, 6, 3, 8, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    divide(arr, 0, n - 1);
    cout << "Sorted array:\n";
    for (int i:arr) {
        cout << i << " ";
    }

    return 0;
}
