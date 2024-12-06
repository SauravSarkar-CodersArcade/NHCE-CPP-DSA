#include <iostream>
using namespace std;
int findMax(int arr[], int size){
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
void countSort(int arr[], int size, int exp){
    int output[size];
    int count[10] = {0};
    for (int i = 0; i < size; ++i) {
        count[(arr[i]/exp)%10]++; // (327 / exp) exp = 1 327 % 10 = 7
    }
    // Cumulative count
    for (int i = 1; i < 10; ++i) {
        count[i] += count[i-1];
    }
    // Start from end of the array
    for (int i = size-1; i >= 0 ; i--) {
        output[--count[(arr[i]/exp)%10]] = arr[i];
    }
    // Copy the output back to the input
    for (int i = 0; i < size; ++i) {
        arr[i] = output[i];
    }

}
void radixSort(int arr[], int size){
    // Find the max
    int max = findMax(arr,size);
    for (int exp = 1; max / exp > 0 ; exp *= 10) {
        countSort(arr, size, exp);
    }

}
int main() {
    int arr[] = {100,332,12,3,14,1,6,400,123};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Before: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    radixSort(arr,size);
    cout << "After: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
