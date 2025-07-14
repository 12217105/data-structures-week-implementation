#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;

    // Node constructor
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class SinglyLinkedList {
private:
    Node* head; // pointer to the first node

public:
    // constructor
    SinglyLinkedList() {
        head = nullptr;
    }

    // add element to the end
    void append(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
        
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // delete the first element
    void deleteFront() {
        if (head == nullptr) {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // print all elements
    void printList() {
        Node* temp = head;
        cout << "[";
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr)
                cout << " -> ";
            temp = temp->next;
        }
        cout << "]" << endl;
    }
};

int main() {
    SinglyLinkedList myList;

    myList.append(10);
    myList.append(20);
    myList.append(30);

    cout << "Initial list: ";
    myList.printList();

    myList.deleteFront();
    cout << "After deleting front: ";
    myList.printList();

    myList.append(40);
    cout << "After adding 40: ";
    myList.printList();

    return 0;
}
// the time complexsity O(n)
