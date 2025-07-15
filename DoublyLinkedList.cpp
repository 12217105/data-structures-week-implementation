#include <iostream>
using namespace std;

// Node struct
struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;

public:
    // constructor
    DoublyLinkedList() {
        head = nullptr;
    }

    // add element at end
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
            newNode->prev = temp;
        }
    }

    // print forward
    void printForward() {
        Node* temp = head;
        cout << "[";
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr)
                cout << ", ";
            temp = temp->next;
        }
        cout << "]" << endl;
    }

    // print backward
    void printBackward() {
        if (head == nullptr) {
            cout << "[]" << endl;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        cout << "[";
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->prev != nullptr)
                cout << ", ";
            temp = temp->prev;
        }
        cout << "]" << endl;
    }
};

int main() {
    DoublyLinkedList d;
    d.append(11);
    d.append(22);
    d.append(33);

    cout << "Forward: ";
    d.printForward();

    cout << "Backward: ";
    d.printBackward();

    return 0;
}
