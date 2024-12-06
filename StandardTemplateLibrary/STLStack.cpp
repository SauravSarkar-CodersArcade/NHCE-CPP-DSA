#include <iostream>
#include <stack>
using namespace std;
void printStackElements(stack<int> s){
    while (!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main() {
    stack<int> numbers;
    numbers.push(10);
    numbers.push(12);
    numbers.push(11);
    numbers.push(14);

    cout << "Size of the stack: " << numbers.size() << endl;
    cout << "Top element: " << numbers.top() << endl;
    printStackElements(numbers);
    return 0;
}
