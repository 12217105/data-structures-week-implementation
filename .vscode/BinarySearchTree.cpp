#include <iostream>
using namespace std;

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

class BST {
public:
    Node* root;

    BST() {
        root = nullptr;
    }

    // insert value
    Node* insert(Node* node, int value) {
        if (node == nullptr) {
            return new Node(value);
        }
        if (value < node->data) {
            node->left = insert(node->left, value);
        } else {
            node->right = insert(node->right, value);
        }
        return node;
    }

    void add(int value) {
        root = insert(root, value);
    }
};

int main() {
    BST t;
    t.add(10);
    t.add(5);
    t.add(15);

    cout << "Root: " << t.root->data << endl;
    cout << "Left: " << t.root->left->data << endl;
    cout << "Right: " << t.root->right->data << endl;

    return 0;
}
