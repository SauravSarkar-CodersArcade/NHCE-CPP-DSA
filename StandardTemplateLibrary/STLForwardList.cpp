#include <bits/stdc++.h>
#include <iostream>
#include <forward_list> // Singly Linked List -> Insertion at tail not available
using namespace std;
int main() {
    forward_list<int> fList = {10, 20, 30};
    // Add elements to the front
    fList.push_front(5);
    fList.push_front(0);
    // Traversal 1 -> for each loop
    for (int x : fList){
        cout << x << " ";
    }
    cout << endl;
    // Traversal 2 -> iterator (It points to the address of the list elements)
    for (auto it = fList.begin(); it != fList.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
    // Traversal 3 -> Iterator with &
    for (int & it : fList){
        cout << it << " ";
    }
    cout << endl;
    // Traversal using auto keyword
    for (auto it : fList){
        cout << it << " ";
    }
    cout << endl;
    // Traversal using the traditional loop using forward_list iterator
    for(forward_list<int>::iterator it = fList.begin(); it != fList.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
    // How do we manually insert data at the end of a forward_list ?
    // By traversing till the end
    auto it = fList.begin();
    while (next(it) != fList.end()){
        ++it;
    }
    fList.insert_after(it, 100);
    fList.insert_after(it, 400);
    for (auto it : fList){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
