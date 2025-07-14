#include <iostream>
using namespace std;

class StackArray {
private:
    int* arr;        // the array to store elements
    int capacity;    // max size of the stack
    int topIndex;    // index of the top element

public:
    // constructor
    StackArray(int size) {
        capacity = size;
        arr = new int[capacity];
        topIndex = -1; // stack is empty at start
    }

    // destructor
    ~StackArray() {
        delete[] arr;
    }

    // push an element to the stack
    void push(int value) {
        if (topIndex == capacity - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++topIndex] = value;
    }

    // remove the top element
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return;
        }
        topIndex--;
    }

    // get the top element
    int top() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[topIndex];
    }

    // check if stack is empty
    bool isEmpty() {
        return topIndex == -1;
    }

    // print all elements in the stack
    void print() {
        cout << "[";
        for (int i = 0; i <= topIndex; i++) {
            cout << arr[i];
            if (i != topIndex)
                cout << ", ";
        }
        cout << "]" << endl;
    }
};

int main() {
    StackArray s(5);

    // pushing elements
    s.push(10);
    s.push(20);
    s.push(30);

    s.print();

    // showing the top element
    cout << "Top element: " << s.top() << endl;

    // popping top element
    s.pop();
    s.print();

    return 0;
}
// the time complexsity O(n)
