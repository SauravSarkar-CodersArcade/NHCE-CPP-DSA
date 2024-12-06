#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
};
void printListElements(Node* node){
    while (node != nullptr){
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "null" << endl;
}
void insertAtFront(Node** head, int newValue){
    // Create a new node
    Node* newNode = new Node();
    newNode->data = newValue;
    // Make the new node point to the head
    newNode->next = *head;
    // Make the head point to the new node
    *head = newNode;
}
void insertAtTail(Node** head, int newValue){
    // Create a new node
    Node* newNode = new Node();
    newNode->data = newValue;
    // This will become the tail, and tail points to null
    newNode->next = nullptr;
    // Empty List
    if (*head == nullptr){
        *head = newNode;
        return;
    }
    // Multiple Nodes
    Node* last = *head;
    while (last->next != nullptr){
        last = last->next;
    }
    // Add the new node to the end of the last node (tail)
    last->next = newNode;
}
void insertAfterSpecific(Node* previous, int newValue){
    if (previous == nullptr){
        cout << "Previous Node cannot be null" << endl;
        return;
    }
    // Create a new node
    Node* newNode = new Node();
    newNode->data = newValue;
    newNode->next = previous->next;
    previous->next = newNode;
}
void deleteFrontNode(Node** head){
    // Empty List
    if (*head == nullptr){
        cout << "List is empty, cannot delete head." << endl;
    }
    Node* temp = *head;
    *head = (*head)->next;
    delete temp;
}
void deleteEndNode(Node** head){
    // Empty List
    if (*head == nullptr){
        cout << "List is empty, cannot delete tail." << endl;
    }
    // Single node
    if ((*head)->next == nullptr){
        delete *head;
        *head = nullptr;
        return;
    }
    // Multiple Nodes -> Traverse till the last node
    Node* last = *head;
    Node* secondLast = nullptr;
    while (last->next != nullptr){
        secondLast = last;
        last = last->next;
    }
    delete last;
    secondLast->next = nullptr;
}
void deleteSpecificNodeWithTarget(Node** head, int target){
    // Empty List
    if (*head == nullptr){
        cout << "List is empty, cannot delete target node." << endl;
    }
    // Head is the target node
    if ((*head)->data == target){
        Node* temp = *head;
        *head = (*head)->next;
        delete temp;
        return;
    }
    // Two Pointer Approach
    Node* curr = *head;
    Node* prev = nullptr;
    while (curr != nullptr && curr->data != target){
        prev = curr;
        curr = curr->next;
    }
    if (curr == nullptr){
        cout << "Target not found in the list." << endl;
        return;
    }
    prev->next = curr->next;
    delete curr;
}
int main() {
    // Manual Entry 1 -> 2 -> 3 -> null
//    Node* head = new Node();
//    head->data = 1;
//    Node* second = new Node();
//    second->data = 2;
//    Node* third = new Node();
//    third->data = 3;
//    head->next = second;
//    second->next = third;
//    third->next = nullptr;
    Node* head = nullptr;
    insertAtFront(&head, 3);
    insertAtFront(&head, 2);
    insertAtFront(&head, 0);
    int arr[] = {4,5,6,7};
    int size = sizeof (arr) / sizeof (arr[0]);
    for (int i = 0; i < size; ++i) {
        insertAtTail(&head, arr[i]);
    }
    insertAfterSpecific(head, 1);
    cout << "List before deleting head: ";
    printListElements(head); // 0 1 2 3 4 5 6 7
    deleteFrontNode(&head);
    cout << "List After deleting head: ";
    printListElements(head);

    cout << "List Before deleting tail: ";
    printListElements(head);
    deleteEndNode(&head);
    cout << "List After deleting tail: ";
    printListElements(head);
    int target;
    cout << "Enter any target node to be deleted:\n";
    cin >> target;
    cout << "List before deleting target: " << target << ": - ";
    printListElements(head);
    deleteSpecificNodeWithTarget(&head, target);
    cout << "List after deleting target: " << target << ": - ";
    printListElements(head);
    return 0;
}
