# data-structures-week-implementation

This repository contains C++ implementations of common data structures.

## Implemented Structures

### 1. Dynamic Array
- A resizable array that doubles its capacity when full.
- Supports adding, setting, getting, and printing elements.
- **Overall Time Complexity:** O(n)

### 2. Singly Linked List
- A linked list where each node points to the next node.
- Supports appending elements, deleting the front, and printing the list.
- **Overall Time Complexity:** O(n)

### 3. Stack (Array-based)
- A stack implemented using an array.
- Supports:
  - `push(value)`
  - `pop()`
  - `top()`
  - `isEmpty()`
  - `print()`
- **Overall Time Complexity:** O(n)

### 4. Stack (Linked List-based)
- A stack implemented using a linked list.
- Supports the same operations as above.
- **Overall Time Complexity:** O(n)

### 5. Queue (Array-based)
- Queue using an array.
- Supports:
  - `enqueue(value)`
  - `dequeue()`
  - `peek()`
  - `isEmpty()`
  - `print()`
- **Overall Time Complexity:** O(n)

### 6. Queue (Linked List-based)
- Queue using a linked list.
- Same operations as array-based queue.
- **Overall Time Complexity:** O(n)

### 7. Doubly Linked List
- Each node has a `next` and a `prev` pointer.
- Can be traversed forward and backward.
- **Overall Time Complexity:** O(n)

### 8. Circular Linked List
- The last node points back to the first.
- Useful in scenarios where looping is needed.
- **Overall Time Complexity:** O(n)

### 9. Min Heap
- Binary heap that keeps the smallest element on top.
- Supports:
  - `insert(value)`
  - `removeMin()`
  - `getMin()`
  - `print()`
- **Time Complexity:**
  - Insert: O(log n)
  - RemoveMin: O(log n)
  - GetMin: O(1)

### 10. Graph (Adjacency List)
- A simple undirected graph using adjacency lists.
- Supports:
  - `addEdge(u, v)`
  - `printGraph()`
- **Overall Time Complexity:** O(V + E)

### 11. Hash Table (with Collision Handling)
- A basic hash table using chaining (linked lists) for collision resolution.
- Supports:
  - `insert(key, value)`
  - `get(key)`
  - `remove(key)`
- **Average Time Complexity:** O(1)  
- **Worst-case Time Complexity:** O(n)

### 12. Trie
- Tree-like structure used to store words efficiently by character prefixes.
- Supports:
  - `insert(word)`
  - `search(word)`
  - `startsWith(prefix)`
- **Time Complexity:**
  - Insert: O(L)
  - Search: O(L)
  - startsWith: O(L)
  - (L = length of the word)

### 13. Union-Find (Disjoint Set)
- Data structure for tracking connected components.
- Supports:
  - `find(x)`
  - `union(x, y)`
- **Time Complexity:**
  - With path compression & union by rank: **O(α(n))** (almost constant)

### 14. Graph Traversals (BFS & DFS)
- Methods to traverse nodes of a graph.
- Supports:
  - Breadth-First Search (BFS)
  - Depth-First Search (DFS)
- **Time Complexity:** O(V + E)
