#include <iostream>
using namespace std;
int firstOccurrence(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s <= e){
        if (arr[mid] == key){
            ans = mid;
            // Find the leftmost
            e = mid -1;
        } else if (arr[mid] < key){
            s = mid + 1; // Right Hand Side
        } else{
            e = mid - 1; // Left Hand Side
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastOccurrence(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s <= e){
        if (arr[mid] == key){
            ans = mid;
            // Find the rightmost
            s = mid +1;
        } else if (arr[mid] < key){
            s = mid + 1; // Right Hand Side
        } else{
            e = mid - 1; // Left Hand Side
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int totalOccurrences(int arr[], int n, int key){
    int fo = firstOccurrence(arr,n,key);
    int lo = lastOccurrence(arr,n,key);
    int to = lo - fo + 1;
    return to;
}
int main() {
    int arr[] = {1,2,3,3,3,3,4,5};
    int n = sizeof (arr) / sizeof (arr[0]);
    int fo = firstOccurrence(arr, n, 3);
    cout << "FO: " << fo << endl;
    int lo = lastOccurrence(arr, n, 3);
    cout << "LO: " << lo << endl;
    int totOcc = totalOccurrences(arr,n,3);
    cout << "TO: " << totOcc << endl;
    return 0;
}
