#include <iostream>
using namespace std;
void merge(int * arr,int s,int e){
    int mid = s + (e-s)/2;
    // Find length &
    // create the two new arrays for storing left & right parts
    int l1 = mid - s + 1;
    int l2 = e - mid;
    int * first = new int[l1];
    int * second = new int[l2];
    int k = s;
    for (int i = 0; i <l1 ; ++i) {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < l2; ++i) {
        second[i] = arr[k++];
    }

    // Merge the two sorted arrays
    int i = 0;
    int j = 0;
    k = s;
    while (i < l1 && j < l2){
        if (first[i] < second[j]){
            arr[k++] = first[i++];
        } else{
            arr[k++] = second[j++];
        }
    }
    // Remaining parts if any copy
    while (i < l1){
        arr[k++] = first[i++];
    }
    while (j < l2){
        arr[k++] = second[j++];
    }
    delete[]first;
    delete[]second;

}
void mergeSort(int * arr, int s, int e){
    // Base Case
    if (s >= e){
        return;
    }
    int mid = s + (e-s)/2;
    // left part
    mergeSort(arr,s,mid);
    // right part
    mergeSort(arr,mid+1,e);
    // Merge both the parts
    merge(arr,s,e);
}
int main() {
    int arr[] = {5,1,3,9,6,2};
    int n = sizeof(arr) / sizeof (arr[0]);
    mergeSort(arr,0, n-1);
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
