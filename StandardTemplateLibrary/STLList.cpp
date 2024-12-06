#include <iostream>
#include <list> // Doubly Linked List
using namespace std;
int main() {
    list<int> lst1; // Default Constructor
    list<int> lst2(3,10); // 10 10 10
    list<int> lst3(lst2); // Copy Constructor lst3 = 10 10 10
    lst1.push_back(10);
    lst1.push_front(20);
    lst1.insert(++lst1.begin(), 15);
    for (auto x: lst1) {
        cout << x << " ";
    }
    cout << endl;
    // Forward Traversal
    for (list<int>::iterator it = lst1.begin(); it != lst1.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
    // Backward Traversal=? rbegin(), rend()
    for (auto it = lst1.rbegin(); it != lst1.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
