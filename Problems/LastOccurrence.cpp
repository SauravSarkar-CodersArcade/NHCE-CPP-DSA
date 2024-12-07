#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int lastIndex(const int * arr, int n, int x){
    int lastOccurrence = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == x){
            lastOccurrence = i;
        }
    }
    return lastOccurrence;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    cout << lastIndex(arr,n,x) << endl;

    return 0;
}
