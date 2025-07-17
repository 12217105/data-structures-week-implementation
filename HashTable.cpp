#include <iostream>
#include <vector>
using namespace std;

// Simple implementation of Min Heap
class MinHeap {
private:
    vector<int> heap;

    // Move the element up to maintain min-heap
    void heapifyUp(int index) {
        while (index > 0 && heap[index] < heap[(index - 1) / 2]) {
            swap(heap[index], heap[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    // Move the element down to maintain min-heap
    void heapifyDown(int index) {
        int n = heap.size();
        while (2 * index + 1 < n) {
            int child = 2 * index + 1;
            if (child + 1 < n && heap[child + 1] < heap[child]) {
                child++;
            }
            if (heap[index] <= heap[child]) break;
            swap(heap[index], heap[child]);
            index = child;
        }
    }

public:
    // Add new value to the heap
    void insert(int value) {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }

    // Remove the minimum element (root)
    void removeMin() {
        if (heap.empty()) return;
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
    }

    // Get the smallest value
    int getMin() {
        if (heap.empty()) return -1;
        return heap[0];
    }

    // Print heap elements
    void print() {
        for (int val : heap) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    MinHeap h;
    h.insert(5);
    h.insert(2);
    h.insert(8);
    h.insert(1);

    cout << "Heap: ";
    h.print();

    cout << "Min: " << h.getMin() << endl;

    h.removeMin();
    cout << "After removing min: ";
    h.print();

    return 0;
}
