#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int * arr = new int[n]; // Allocation 1-D
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // De-allocation
    delete[]arr;

    int ** matrix = new int * [n]; // 2D Array, n = rows
    for (int i = 0; i < n; ++i) {
        matrix[i] = new int [n]; // Each Column
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }cout << endl;
    }
    cout << endl;
    // De-allocation 2D
    delete[]matrix;
    return 0;
}
