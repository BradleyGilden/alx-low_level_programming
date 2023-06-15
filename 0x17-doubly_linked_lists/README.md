# Doubly Linked Lists

**A doubly linked list is a data structure that consists of a sequence of nodes, where each node contains a value and two pointers. The first pointer, called "next," points to the next node in the sequence, and the second pointer, called "previous," points to the previous node.**

```
Node 1          Node 2          Node 3
+-------+       +-------+       +-------+
| Value |<------| Value |<------| Value |
|-------|       |-------|       |-------|
| Prev  |------>| Prev  |------>| Prev  |
| Next  |<------| Next  |<------| Next  |
+-------+       +-------+       +-------+
```
**The first and last nodes in a doubly linked list are called the head and tail, respectively. In a doubly linked list, you can traverse the list in both forward and backward directions because each node has pointers to both the next and previous nodes.**
<br>
<br>
## Directory Files


## Doubly Linked List uses:


1. `Insertion and deletion`: Doubly linked lists allow efficient insertion and deletion operations at both the beginning and end of the list. Unlike singly linked lists, which require traversing the list to find the previous node for insertion or deletion, doubly linked lists can perform these operations in constant time.

2. `Reverse traversal`: Due to the presence of the previous pointers, doubly linked lists allow easy backward traversal from the tail to the head. This feature is useful in scenarios where you need to iterate over the list in reverse order.

3. `Implementation of other data structures`: Doubly linked lists serve as the foundation for more complex data structures like queues, deques (double-ended queues), and associative arrays.

4. `LRU cache`: Doubly linked lists can be employed in the implementation of an LRU (Least Recently Used) cache. The LRU cache evicts the least recently used items when the cache reaches its capacity. Doubly linked lists help maintain the order of recently used items for efficient cache management.
