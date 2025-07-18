# 📦 data-structures-week-implementation

This repository contains C++ implementations of common data structures.  
Each implementation is written in a simple and beginner-friendly way to demonstrate core concepts.


---

## 1. Dynamic Array
Resizable array that doubles in size when full.  
**Operations**: `add`, `get`, `print`, `resize`  
**Time Complexity**: O(n)

---

## 2. Singly Linked List
Each node points to the next node only.  
**Operations**: `append`, `deleteFront`, `print`  
**Time Complexity**: O(n)

---

## 3. Stack (Array-based)
Stack using arrays.  
**Operations**: `push`, `pop`, `top`, `isEmpty`, `print`  
**Time Complexity**: O(n)

---

## 4. Stack (Linked List-based)
Stack using linked list.  
**Operations**: Same as array-based stack  
**Time Complexity**: O(n)

---

## 5. Queue (Array-based)
Queue implemented using a simple array.  
**Operations**: `enqueue`, `dequeue`, `peek`, `isEmpty`, `print`  
**Time Complexity**: O(n)

---

## 6. Queue (Linked List-based)
Queue using linked list for dynamic memory usage.  
**Operations**: Same as array-based  
**Time Complexity**: O(n)

---

## 7. Doubly Linked List
Each node has a `next` and `prev` pointer.  
**Operations**: `append`, `printForward`, `printBackward`  
**Time Complexity**: O(n)

---

## 8. Circular Linked List
The last node links back to the first node.  
**Operations**: `append`, `print`  
**Time Complexity**: O(n)

---

## 9. Min Heap
Binary heap where the minimum value is always on top.  
**Operations**: `insert`, `removeMin`, `getMin`, `print`  
**Time Complexity**:  
- Insert: O(log n)  
- RemoveMin: O(log n)  
- GetMin: O(1)

---

## 10. Graph (Adjacency List)
Undirected graph using adjacency lists.  
**Operations**: `addEdge`, `printGraph`  
**Time Complexity**: O(V + E)

---

## 11. Hash Table (with Collision Handling)
Uses chaining to handle collisions.  
**Operations**: `insert`, `get`, `remove`  
**Time Complexity**:  
- Average Case: O(1)  
- Worst Case: O(n)

---

## 12. Trie
Prefix tree to store strings efficiently.  
**Operations**: `insert(word)`, `search(word)`  
**Time Complexity**: O(L), where L is the length of the word

---

## 13. Union-Find (Disjoint Set)
Efficient set structure for dynamic connectivity.  
**Operations**: `find(x)`, `union(x, y)`  
**Time Complexity**: ~O(α(n)) with path compression

---

## 14. Graph Traversals (BFS/DFS)
Basic graph traversal algorithms.  
**Operations**: `bfs(start)`, `dfs(start)`  
**Time Complexity**: O(V + E)

