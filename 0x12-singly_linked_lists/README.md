# Single Linked Lists

**Linked lists are data structure similar to arrays, storing a list of data ordered according to the programmers specifications**

## Project File Contents

* [0-print_list.c](0-print_list.c) - contains a function that prints all the elements of a list_t list.
* [1-list_len.c](1-list_len.c) - contains a function that returns the number of elements in a linked list_t list.
* [2-add_node.c](2-add_node.c) - contains a function that adds a new node at the beginning of a list_t list.
* [3-add_node_end.c](3-add_node_end.c) - contains  a function that adds a new node at the end of a list_t list.
* [4-free_list.c](4-free_list.c) - a function that frees a list_t list.
* [100-first.c](100-first.c) - contains a function that prints "You're beat! and yet, you must allow,\nI bore my house upon my back!\n" before the main function is executed.
* [101-hello_holberton.asm](101-hello_holberton.asm) - contains a 64-bit program in assembly that prints "Hello, Holberton", followed by a new line.

## Single Linked Lists properties

* Navigation is Forward only
* A linked list made up of **nodes** containging: Data and Link
  * ```
    +--------+--------+          +--------+--------+
    |  Data  |  Link  | --next-->|  Data  |  Link  |
	+--------+--------+          +--------+--------+ 
	       Node1						Node2
	```

* Each node contains data of a specific type and a link pointing to the next node in list. The link of the last node will point to NULL.
  * ```
    +--------+--------+          +--------+--------+
    |  Data  |  2000  | --next-->|  Data  |  NULL  |
	+--------+--------+          +--------+--------+ 
	  address:  1000  				address: 2000
	```
* We can use a **Head** pointer to point to the first node of the list
  * ```
    +--------+--------+          +--------+--------+
    |  Data  |  2000  | --next-->|  Data  |  NULL  |
	+--------+--------+          +--------+--------+ 
	  1000  				        2000
	    ↑
	+--------+
    |  1000  |
    +--------+
	   Head
	
	```
* Unlike arrays which are sequential in memory (e.g int array: 1000->1004->1008), liked lists are linked to scattered locations in memory (e.g int linked list: 1004->2508->988)

## When To Use Linked Lists vs Arrays

| Linked Lists | Arrays |
|:-------------|:-------|
| 1. You need constant-time insertions/deletions from the list (such as in real-time computing where time predictability is absolutely critical) | 1. You need indexed/random access to elements |
| 2. You don't know how many items will be in the list. With arrays, you may need to re-declare and copy memory if the array grows too big | 2. You know the number of elements in the array ahead of time so that you can allocate the correct amount of memory for the array |
| 3. You don't need random access to any elements  | 3. You need speed when iterating through all the elements in sequence. You can use pointer math on the array to access each element, whereas you need to lookup the node based on the pointer for each element in linked list, which may result in page faults which may result in performance hits. |
| 4. You want to be able to insert items in the middle of the list (such as a priority queue) | 4. Memory is a concern. Filled arrays take up less memory than linked lists. Each element in the array is just the data. Each linked list node requires the data as well as one (or more) pointers to the other elements in the linked list. |
