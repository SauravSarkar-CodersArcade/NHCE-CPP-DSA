#include <iostream>
#include <set>
using namespace std;
int main() {
    set<int> s;
    s.insert(5);
    s.insert(50);
    s.insert(15);
    s.insert(5);
    s.insert(50);
    s.insert(15);

    cout << "Elements in the set (Sorted): ";
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
    cout << "Elements in the set (Sorted): ";
    for (int x : s) {
        cout << x << " ";
    }
    return 0;
}
