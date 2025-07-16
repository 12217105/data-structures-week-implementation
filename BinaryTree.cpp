#include <iostream>
using namespace std;

// Node struct
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree {
public:
    Node* root;

    BinaryTree() {
        root = nullptr;
    }

    // insert left and right manually (for example)
    void addRoot(int value) {
        root = new Node(value);
    }
};

int main() {
    BinaryTree t;
    t.addRoot(1);
    t.root->left = new Node(2);
    t.root->right = new Node(3);

    cout << "Root: " << t.root->data << endl;
    cout << "Left: " << t.root->left->data << endl;
    cout << "Right: " << t.root->right->data << endl;

    return 0;
}
