#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int current = arr[i];
        int prev = i - 1;
        while(prev >= 0 && arr[prev] > current) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = current;
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr[] = {4,1,5,2,3};

    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}