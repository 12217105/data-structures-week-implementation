#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;     
    int cap;      
    int len;      

    // Resize array to new capacity
    void resize(int newCap) {
        int* temp = new int[newCap];
        for (int i = 0; i < len; i++) {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        cap = newCap;
    }

public:
    // Constructor
    DynamicArray() {
        cap = 2;
        len = 0;
        arr = new int[cap];
    }

    // Destructor
    ~DynamicArray() {
        delete[] arr;
    }

    // Add element
    void add(int value) {
        if (len == cap) {
            resize(cap * 2);
        }
        arr[len] = value;
        len++;
    }

    // Get element by index
    int get(int index) {
        if (index < 0 || index >= len) {
            cout << "Error: index out of bounds" << endl;
            return -1;
        }
        return arr[index];
    }

    // Set element at index
    void set(int index, int value) {
        if (index < 0 || index >= len) {
            cout << "Error: index out of bounds" << endl;
            return;
        }
        arr[index] = value;
    }

    // Print all elements
    void print() {
        cout << "[";
        for (int i = 0; i < len; i++) {
            cout << arr[i];
            if (i != len - 1) cout << ", ";
        }
        cout << "]" << endl;
    }
    int size() {
        return len;
    }
};

int main() {
    DynamicArray myArray;

    myArray.add(5);
    myArray.add(8);
    myArray.add(12);

    myArray.print(); // [5, 8, 12]

    cout << "Element at index 1: " << myArray.get(1) << endl;

    myArray.set(1, 99);
    myArray.print(); // [5, 99, 12]

    cout << "Current size: " << myArray.size() << endl;

    return 0;
}
// the time complexsity O(n)
 