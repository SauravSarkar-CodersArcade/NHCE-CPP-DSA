#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct CustomCompare {
    bool operator() (const int& lhs, const int& rhs){
        return lhs > rhs; // Ascending Order
        return lhs < rhs; // Descending Order
    }
};
int main() {
    priority_queue<int, vector<int>, CustomCompare> customHeap;
    customHeap.push(10);
    customHeap.push(1);
    customHeap.push(5);
    cout << "Custom Heap: ";
    while (!customHeap.empty()){
        cout << customHeap.top() << " ";
        customHeap.pop();
    }
    cout << endl;
    return 0;
}
