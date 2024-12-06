#include <iostream>
#include <queue>
using namespace std;
void printQueueElements(queue<int> q){
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
int main() {
    queue<int> nums;
    nums.push(12);
    nums.push(212);
    nums.push(122);
    nums.push(112);
    cout << "Front element: " << nums.front() << endl;
    cout << "Back element: " << nums.back() << endl;
    printQueueElements(nums);
    return 0;
}
