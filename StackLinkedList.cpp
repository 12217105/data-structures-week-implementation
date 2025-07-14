#include <iostream>
using namespace std;

// Node struct for the linked list
struct Node {
    int data;
    Node* next;

    // constructor
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class StackLinkedList {
private:
    Node* topNode; // pointer to the top node

public:
    // constructor
    StackLinkedList() {
        topNode = nullptr;
    }

    // destructor
    ~StackLinkedList() {
        // delete all nodes
        while (!isEmpty()) {
            pop();
        }
    }

    // push element to the stack
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = topNode;
        topNode = newNode;
    }

    // remove the top element
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return;
        }
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
    }

    // get the top element
    int top() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return topNode->data;
    }

    // check if stack is empty
    bool isEmpty() {
        return topNode == nullptr;
    }

    // print all elements
    void print() {
        Node* temp = topNode;
        cout << "[";
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr)
                cout << ", ";
            temp = temp->next;
        }
        cout << "]" << endl;
    }
};

int main() {
    StackLinkedList s;

    // pushing elements
    s.push(100);
    s.push(200);
    s.push(300);

    s.print();

    // show the top element
    cout << "Top element: " << s.top() << endl;

    // popping element
    s.pop();
    s.print();

    return 0;
}
// the time complexsity O(n)
