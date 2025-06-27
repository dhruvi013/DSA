#include <bits/stdc++.h>
using namespace std;

// Node class
class Node{
public:
    int data;
    Node* next;

    // constructor
    Node(int val){
        data = val;
        next = nullptr;
    }
};

class LinkedList{
    Node* Head;
    Node* Tail;

public:
    LinkedList(){
        Head = Tail = nullptr;
    }

    void insertAtHead(int val){
        Node* node1 = new Node(val); 
        if(Head == nullptr){
            Head = Tail = node1;
            return;
        } else{
            node1->next = Head;
            Head = node1;
        }
    
    }

    void printList(){
        Node* temp = Head;
        while(temp != nullptr){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void insertAtLast(int val){
        Node* node1 = new Node(val);
        if(Head == nullptr){
            Head = Tail = node1;
            return;
        }
        Tail->next = node1;
        Tail = node1;
    }

void deleteNode(int val) {
    if (Head == nullptr) {
        cout << "Empty Linked list!!" << endl;
        return;
    }

    // Case 1: The head node itself needs to be deleted
    if (Head->data == val) {
        Node* temp = Head;
        Head = Head->next;
        delete temp;
        return;
    }

    Node* current = Head;
    while (current->next != nullptr && current->next->data != val) {
        current = current->next;
    }

    // If not found
    if (current->next == nullptr) {
        cout << "Value not found!" << endl;
        return;
    }

    // Found node to delete
    Node* temp = current->next;
    current->next = temp->next;
    delete temp;
}
};

int main(){
    LinkedList LL;

    LL.insertAtHead(3);
    LL.insertAtHead(5);    
    LL.insertAtHead(7);    
    LL.insertAtHead(4);
    LL.printList();
    LL.insertAtLast(9);
    LL.printList();
    LL.deleteNode(5);
    LL.printList();
}