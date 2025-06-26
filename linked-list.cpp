// add a node to linked list 
// node can do compile time and run time both memory alocation
#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Linked List class
class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    // Add a node at the end
    void addNode(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {  =
            head = newNode;  // First node becomes head
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;  // Go to last node
            }
            temp->next = newNode;  // Link new node at the end
        }
    }

    // Display the list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;

    list.addNode(10);
    list.addNode(20);
    list.addNode(30);

    cout << "Linked List: ";
    list.display();

    return 0;
}
