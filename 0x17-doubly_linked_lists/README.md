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

## Directory Files

* [lists.h](lists.h) - header file for directory
* [0-print_dlistint.c](0-print_dlistint.c) - a function to print a doubly linked list
* [1-dlistint_len.c](1-dlistint_len.c) - a function that computes length of doubly linked list
* [2-add_dnodeint.c ](2-add_dnodeint.c ) - a function that adds node at the beginning of doubly linked list
* [3-add_dnodeint_end.c](3-add_dnodeint_end.c) - a function that adds node at the end of doubly linked list
* [4-free_dlistint.c](4-free_dlistint.c) - a function that frees a doubly linked list
* [5-get_dnodeint.c](5-get_dnodeint.c) - a function that returns node at index 
* [6-sum_dlistint.c](6-sum_dlistint.c) - a function that computes the sum of the data in a doubly linked list
* [7-insert_dnodeint.c](7-insert_dnodeint.c) - a function that iserts node at index of doubly linked list
* [8-delete_dnodeint.c](8-delete_dnodeint.c) - a function that deletes node at index of doubly linked list

## Doubly Linked List uses:


1. `Insertion and deletion`: Doubly linked lists allow efficient insertion and deletion operations at both the beginning and end of the list. Unlike singly linked lists, which require traversing the list to find the previous node for insertion or deletion, doubly linked lists can perform these operations in constant time.

2. `Reverse traversal`: Due to the presence of the previous pointers, doubly linked lists allow easy backward traversal from the tail to the head. This feature is useful in scenarios where you need to iterate over the list in reverse order.

3. `Implementation of other data structures`: Doubly linked lists serve as the foundation for more complex data structures like queues, deques (double-ended queues), and associative arrays.

4. `LRU cache`: Doubly linked lists can be employed in the implementation of an LRU (Least Recently Used) cache. The LRU cache evicts the least recently used items when the cache reaches its capacity. Doubly linked lists help maintain the order of recently used items for efficient cache management.
