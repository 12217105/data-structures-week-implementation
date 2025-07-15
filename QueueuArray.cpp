#include <iostream>
using namespace std;

class QueueArray {
private:
    int* arr;
    int front;
    int rear;
    int capacity;
    int count;

public:
    // constructor
    QueueArray(int size) {
        capacity = size;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        count = 0;
    }

    // destructor
    ~QueueArray() {
        delete[] arr;
    }

    // add element to the queue
    void enqueue(int value) {
        if (count == capacity) {
            cout << "Queue is full" << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = value;
        count++;
    }

    // remove element from front
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        front = (front + 1) % capacity;
        count--;
    }

    // get front element
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    // check if empty
    bool isEmpty() {
        return count == 0;
    }

    // print all elements
    void print() {
        cout << "[";
        for (int i = 0; i < count; i++) {
            int index = (front + i) % capacity;
            cout << arr[index];
            if (i != count -1)
                cout << ", ";
        }
        cout << "]" << endl;
    }
};

int main() {
    QueueArray q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.print();

    q.dequeue();
    q.print();

    cout << "Front element: " << q.peek() << endl;

    return 0;
}
