#include <iostream>
using namespace std;

// Node struct
struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class CircularLinkedList {
private:
    Node* last;

public:
    // constructor
    CircularLinkedList() {
        last = nullptr;
    }

    // add element at end
    void append(int value) {
        Node* newNode = new Node(value);
        if (last == nullptr) {
            last = newNode;
            last->next = last;
        } else {
            newNode->next = last->next;
            last->next = newNode;
            last = newNode;
        }
    }

    // print all elements
    void print() {
        if (last == nullptr) {
            cout << "[]" << endl;
            return;
        }
        Node* temp = last->next;
        cout << "[";
        do {
            cout << temp->data;
            temp = temp->next;
            if (temp != last->next)
                cout << ", ";
        } while (temp != last->next);
        cout << "]" << endl;
    }
};

int main() {
    CircularLinkedList c;
    c.append(7);
    c.append(14);
    c.append(21);

    c.print();

    return 0;
}
