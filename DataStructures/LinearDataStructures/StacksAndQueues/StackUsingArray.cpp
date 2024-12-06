#include <iostream>

using namespace std;
const int MAX_SIZE = 100;
class Stack {
private:
    int arr[MAX_SIZE];
    int top;
public:
    Stack(){
        top = -1;
    }
    // push, pop, peek, isEmpty, size
    void push(int element){
        if (top == MAX_SIZE){
            cout << "Stack Overflow." << endl;
        } else{
            top++;
            arr[top] = element;
        }
    }
    void pop(){
        if (top == -1){
            cout << "Stack Underflow." << endl;
        } else{
            top--;
        }
    }
    int peek(){
        if (top == -1){
            cout << "Stack Underflow." << endl;
            return -1;
        } else{
            return arr[top];
        }
    }
    bool isEmpty(){
        return top == -1;
    }
    int size(){
        return top + 1;
    }

};
int main() {
    Stack stack = Stack();
    int arr[] = {21,13,12,14,17,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; ++i) {
        stack.push(arr[i]);
    }
    cout << "Top element of the stack: " << stack.peek() << endl;
    stack.pop();
    cout << "Top element of the stack: " << stack.peek() << endl;
    cout << stack.size();
    return 0;
}
