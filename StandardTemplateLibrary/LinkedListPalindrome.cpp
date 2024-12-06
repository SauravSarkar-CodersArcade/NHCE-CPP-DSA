#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* current = head;
        // T1 to store linked list elements into stack
        while (current != nullptr){
            s.push(current->val);
            current = current->next;
        }
        // T2 to pop stack elements & compare with linked list elements
        current = head;
        while (current != nullptr){
            int top = s.top();
            s.pop();
            if (current->val != top){
                return false;
            }
            current = current->next;
        }
        return true;
    }
};
int main() {
    return 0;
}
