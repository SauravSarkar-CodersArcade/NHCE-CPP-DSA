#include <iostream>
#include <vector>
using namespace std;

void findMinimumCoins(vector<int>& coins, int V){
    vector<int> result;
    for (int i = coins.size()-1; i >= 0; i--) { // Sorted Array
        while (V >= coins[i]){
            V -= coins[i];
            result.push_back(coins[i]);
        }
    }
    cout << "Coins Selected: ";
    for (int coin : result) {
        cout << coin << " ";
    }cout << endl;
    cout << "Minimum coins: " << result.size() << endl;
}
int main() {
    vector<int> coins = {1,2,5,10,20,50,100,500,2000};
    int V = 31;
    findMinimumCoins(coins,V);
    return 0;
}
