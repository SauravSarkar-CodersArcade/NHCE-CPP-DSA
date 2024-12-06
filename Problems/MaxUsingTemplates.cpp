#include <iostream>
using namespace std;
template <typename T>
T findMax(T arr[], int n){
    T max = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main() {
    int intArr[] = {1,2,3,4,5};
    float floatArr[] = {1.2f,3.2f,2.5f,3.9f,4.1f,5.0f};
    double doubleArr[] = {1.1,2.5,3.3,4.2,5.9};
    cout << findMax(intArr,5) << " " << findMax(floatArr,6) << " "  << findMax(doubleArr,5);

    return 0;
}
