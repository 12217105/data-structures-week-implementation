#include <iostream>
#include <unordered_map>
using namespace std;

// Simple Trie Node
struct TrieNode {
    unordered_map<char, TrieNode*> children;
    bool isEnd;

    TrieNode() : isEnd(false) {}
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            if (!node->children.count(ch))
                node->children[ch] = new TrieNode();
            node = node->children[ch];
        }
        node->isEnd = true;
    }

    bool search(string word) {
        TrieNode* node = root;
        for (char ch : word) {
            if (!node->children.count(ch))
                return false;
            node = node->children[ch];
        }
        return node->isEnd;
    }
};

int main() {
    Trie trie;
    trie.insert("apple");
    trie.insert("app");

    cout << trie.search("app") << endl;    
    cout << trie.search("appl") << endl;   
    return 0;
}  
