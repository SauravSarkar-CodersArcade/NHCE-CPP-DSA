#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class Queue {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;
public:
    Queue(){
        front = -1, rear = -1;
    }
    bool isEmpty(){
        return (front == -1 && rear == -1);
    }
    bool isFull(){
        return (rear == MAX_SIZE -1);
    }
    void enqueue(int item){
        if (isFull()){
            cout << "Queue is full." << endl;
        } else if(isEmpty()){
            front = rear = 0;
        } else{
            rear++;
        }
        arr[rear] = item;
        cout << "Enqueued item is: " << item << endl;
    }
    void deque(){
        if (isEmpty()){
            cout << "Queue is empty." << endl;
        }
        else if (front == rear){
            front = rear = -1;
        } else{
            front++;
        }
    }
    int peek(){
        if (isEmpty()){
            cout << "Queue is empty." << endl;
            return -1;
        } else{
            return arr[front];
        }
    }
    void display(){
        if (isEmpty()){
            cout << "Queue is empty." << endl;
            return;
        }
        for (int i = front; i <=rear ; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    Queue queue;
    int arr[] = {2,4,6,5,1,3};
    int n = sizeof(arr) / sizeof (arr[0]);
    for (int i = 0; i < n; ++i) {
        queue.enqueue(arr[i]);
    }
    queue.display();
    queue.deque();
    queue.display();
    cout << "Front " << queue.peek() << endl;
    return 0;
}
