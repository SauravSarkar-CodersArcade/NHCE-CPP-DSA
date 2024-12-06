#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void printQueueElements(queue<int> q){
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
queue<int> reverseQueue(queue<int> & q){
    stack<int> s;
    while (!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    while (!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
    return q;
}
int main() {
    queue<int> nums;
    nums.push(12);
    nums.push(212);
    nums.push(122);
    nums.push(112);
    cout << "Before reversal: ";
    printQueueElements(nums);
    cout << endl;
    reverseQueue(nums);
    cout << "After reversal: ";
    printQueueElements(nums);
    cout << endl;
    return 0;
}
