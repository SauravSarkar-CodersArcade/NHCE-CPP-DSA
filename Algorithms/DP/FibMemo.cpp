#include <iostream>
#include <vector>
using namespace std;
int fibonacci(int n, vector<int>& dp){
    if (n == 0 || n == 1){
        return n;
    }
    // Step 3: If you have the answer, don't do it again
    if (dp[n] != -1){
        return dp[n];
    }
    // Step 2: Store the values into the dp array
    dp[n] = fibonacci(n-1,dp) + fibonacci(n-2,dp);
    return dp[n];
}
int main() {
    int n;
    cin >> n;
    // Step 1: Create a dp array and initialize that to -1
    vector<int> dp(n+1,-1);
    cout << fibonacci(n,dp) << endl;
    return 0;
}
