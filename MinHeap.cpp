#include <iostream>
#include <vector>
using namespace std;

// MinHeap using vector
class MinHeap {
private:
    vector<int> heap;

    // Keep the min-heap property from bottom to top
    void heapifyUp(int index) {
        while (index > 0 && heap[index] < heap[(index - 1) / 2]) {
            swap(heap[index], heap[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    // Keep the min-heap property from top to bottom
    void heapifyDown(int index) {
        int n = heap.size();
        while (2 * index + 1 < n) {
            int child = 2 * index + 1;

            // Get the smaller child
            if (child + 1 < n && heap[child + 1] < heap[child])
                child++;

            // If parent is smaller than both children, done
            if (heap[index] <= heap[child])
                break;

            // Swap and continue
            swap(heap[index], heap[child]);
            index = child;
        }
    }

public:
    // Add value to heap
    void insert(int value) {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }

    // Remove minimum value (top)
    void removeMin() {
        if (heap.empty()) return;

        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
    }

    // Get minimum value without removing it
    int getMin() {
        if (heap.empty()) return -1;
        return heap[0];
    }

    // Print heap values
    void print() {
        for (int val : heap) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    MinHeap h;
    h.insert(7);
    h.insert(3);
    h.insert(10);
    h.insert(1);

    cout << "Heap content: ";
    h.print();

    cout << "Min element: " << h.getMin() << endl;

    h.removeMin();

    cout << "After removing min: ";
    h.print();

    return 0;
}
