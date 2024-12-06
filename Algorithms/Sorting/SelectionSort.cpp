#include <iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; ++i) {
        int minIndex = i;
        for (int j = i+1; j < n; ++j) {
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if (minIndex != i){
            swap(arr[i], arr[minIndex]);
        }
    }
}
int main() {
    int arr[] = {5,1,3,9,6,2};
    int n = sizeof(arr) / sizeof (arr[0]);
    selectionSort(arr,n);
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
