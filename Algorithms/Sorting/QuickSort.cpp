#include <iostream>
using namespace std;
int partitionIndex(int arr[], int s, int e){
    int pivot = arr[s];
    int count = 0;
    for (int i = s+1; i <= e; ++i) {
        if (arr[i] <= pivot){
            count++;
        }
    }
    // Place the pivot at it's correct index or correct position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);
    // Let's manage the left and right part of the pivot
    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex){
        while (arr[i] <= pivot){
            i++;
        }
        while (arr[j] > pivot){
            j--;
        }
        if (i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int s, int e){
    // Base Case
    if (s >= e){
        return;
    }
    // Pivot for the partition
    int p = partitionIndex(arr,s,e);
    // sort the left part
    quickSort(arr,s,p-1);
    // sort the right part
    quickSort(arr,p+1,e);
}
int main() {
    int arr[] = {100,332,12,3,14,1,6,400,123};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Before: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    quickSort(arr,0,size-1);
    cout << "After: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
