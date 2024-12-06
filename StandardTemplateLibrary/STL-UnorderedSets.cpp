#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    unordered_set<int> s;
    s.insert(5);
    s.insert(50);
    s.insert(15);
    s.insert(5);
    s.insert(50);
    s.insert(15);
    s.insert(25);
    s.insert(250);
    s.insert(135);
    s.insert(53);
    s.insert(508);
    s.insert(15);
    cout << "Elements in the unordered-set (Hashed): ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;
    // Searching an element:
    int searchElement = 510;
    auto it = s.find(searchElement); // O(1)
    if (it != s.end()){
        cout << "Element " << searchElement << " found." << endl;
    }else{
        cout << "Element " << searchElement << " not found." << endl;
    }
    // Remove
    s.erase(15);
    cout << "Elements in the unordered-set (Hashed): ";
    for (int x : s) {
        cout << x << " ";
    }
    return 0;
}
