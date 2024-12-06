#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    // Deletion or removal complexity ? O(1)
    // Max heap
    priority_queue<int> maxHeap;
    maxHeap.push(10);
    maxHeap.push(20);
    maxHeap.push(4);
    maxHeap.push(5);
    maxHeap.push(50);
    cout << "Max Heap: ";
    while (!maxHeap.empty()){
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;
    // Min heap using greater<int> comparator
    // greater<int> actually reverses the priority
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(50);
    minHeap.push(10);
    minHeap.push(20);
    minHeap.push(3);
    minHeap.push(5);
    cout << "Min Heap: ";
    while (!minHeap.empty()){
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;
    return 0;
}
