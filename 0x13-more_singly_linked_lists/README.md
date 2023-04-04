# More Singly Linked Lists

**This repository contains more practice manipulating singly linked lists**

## File Contents:

* [lists.h](lists.h) - header file for all the functions created in the directory. Contains a struct listint_s:
  ```C
  /**
  * struct listint_s - singly linked list
  * @n: integer
  * @next: points to the next node
  *
  * Description: singly linked list node structure
  * 
  */
  typedef struct listint_s
  {
      int n;
      struct listint_s *next;
  } listint_t;
  ```
* [0-print_listint.c](0-print_listint.c) - contains a function that prints all the elements of a listint_t list.
* [1-listint_len.c](1-listint_len.c) - contains a function that returns the number of elements in a linked listint_t list.
* [2-add_nodeint.c](2-add_nodeint.c) - contains a function that adds a new node at the beginning of a listint_t list.
* [3-add_nodeint_end.c](3-add_nodeint_end.c) - contains a function that adds a new node at the end of a listint_t list.
* [4-free_listint.c](4-free_listint.c) - contains a function that frees a listint_t list.
* [5-free_listint2.c](5-free_listint2.c) - contains a function that frees a listint_t list and set's head to NULL.
* [6-pop_listint.c](6-pop_listint.c) - contains a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
* [7-get_nodeint.c](7-get_nodeint.c) - contains a function that returns the nth node of a listint_t linked list.
* [8-sum_listint.c](8-sum_listint.c) - contains a function that returns the sum of all the data (n) of a listint_t linked list.
* [9-insert_nodeint.c](9-insert_nodeint.c) - contains a function that inserts a new node at a given position.
* [10-delete_nodeint.c](10-delete_nodeint.c) - contains a function that deletes the node at index index of a listint_t linked list.
* [100-reverse_listint.c](100-reverse_listint.c) - contains a function that reverses a listint_t linked list.
* [101-print_listint_safe.c](101-print_listint_safe.c) - contains functions that print a listint_t linked list.
* [102-free_listint_safe.c](102-free_listint_safe.c) - contains a function that frees a listint_t list safely avoiding continuous loops.
* [103-find_loop.c](103-find_loop.c) - contains a function that finds the loop in a linked list.


for more info on linked lists see [Info](../0x12-singly_linked_lists/README.md)
