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

class QueueLinkedList {
private:
    Node* front;
    Node* rear;

public:
    // constructor
    QueueLinkedList() {
        front = nullptr;
        rear = nullptr;
    }

    // destructor
    ~QueueLinkedList() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    // add element
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // remove element
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
    }

    // get front element
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;
    }

    // check if empty
    bool isEmpty() {
        return front == nullptr;
    }

    // print elements
    void print() {
        Node* temp = front;
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
    QueueLinkedList q;
    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(25);

    q.print();

    q.dequeue();
    q.print();

    cout << "Front element: " << q.peek() << endl;

    return 0;
}
