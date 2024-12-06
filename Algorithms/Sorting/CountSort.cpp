#include <iostream>
using namespace std;
void countSort(int arr[], int size){
    // Find max
    int k = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > k){
            k = arr[i];
        }
    }
    // Count array -> 0-9 (10 elements)
    // int count[10] = {0};
    int * count = new int[k+1];
    for (int i = 0; i < k+1; ++i) {
        count[i] = 0;
    }
    // Calculate the frequency/count of each element in the array
    for (int i = 0; i < size; ++i) {
        count[arr[i]]++;
    }
    // Calculate the cumulative count
    for (int i = 1; i <= k; ++i) {
        count[i] += count[i-1]; // current = current + previous
    }
    // Output array 
    int output[size];
    
    // Start from the end of the array (R - L)
    for (int i = size-1; i >= 0; i--) {
        output[--count[arr[i]]] = arr[i];
    }
    // Copy the output back to the input
    for (int i = 0; i < size; ++i) {
        arr[i] = output[i];
    }

}
int main() {
    int arr[] = {1,3,2,3,4,1,6,4,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Before: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    countSort(arr,size);
    cout << "After: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
