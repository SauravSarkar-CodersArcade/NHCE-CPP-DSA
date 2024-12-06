#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    while (s <= e){
        if (arr[mid] == key){
            return mid;
        } else if (arr[mid] < key){
            s = mid + 1; // Right Hand Side
        } else{
            e = mid - 1; // Left Hand Side
        }
        mid = s + (e-s)/2;
    }
    return -1;
}
int main() {
    int arr[] = {4,7,9,30,71};
    cout << binarySearch(arr, 5, 9);
    cout << endl;
    cout << "Max Integer Value: " << INT_MAX << endl;
    cout << "Min Integer Value: " << INT_MIN << endl;
    cout << "Max Integer Value + 1: " << INT_MAX + 1 << endl;
    cout << "Min Integer Value - 1: " << INT_MIN - 1 << endl;
    return 0;
}
