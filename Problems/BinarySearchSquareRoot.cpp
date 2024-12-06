#include <iostream>
using namespace std;
int square_root_bs(int n){
    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s <= e){
        int square = mid * mid;
        if (square == n){
            return mid;
        } else if (square < n){
            // Store the mid as the answer and check for exact value if less
            ans = mid;
            s = mid + 1;
        } else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    int sqrt = square_root_bs(n);
    cout << "Square root of " << n << " is " << sqrt << endl;
    return 0;
}
