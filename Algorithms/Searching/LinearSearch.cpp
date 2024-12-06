#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int key){
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key){
            return i; // Return index
        }
    }
    return -1; // Not found
}
int main() {
    int arr[] = {4,1,2,3,7};
    cout << linearSearch(arr, 5, 1);
    return 0;
}
