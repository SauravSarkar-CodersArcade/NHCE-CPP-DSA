#include <iostream>
using namespace std;
int recursive_binary_search(int * arr, int n, int s, int e, int key){
    if (s <= e){
        int mid = s + (e - s)/2;
        if (arr[mid] == key){
            return mid;
        } else if (arr[mid] < key){
            // What changes? start changes, we go to the right
            return recursive_binary_search(arr, n, mid+1, e, key);
        } else{
            return recursive_binary_search(arr, n, s, mid-1, key);
        }
    } return -1;
}
int main() {
    int arr[] = {4,7,9,30,71};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << recursive_binary_search(arr, 5, 0, size-1, 400);
    cout << endl;
    return 0;
}
