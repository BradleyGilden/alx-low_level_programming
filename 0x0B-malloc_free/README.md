# Memory Structure

<pre>
 _____________________
|        stack        |   \
|_____________________|    \
|          ↓          |     \
|                     |      \  function calls &
|          ↑          |      /  local variables
|_____________________|     /
|        Heap         |    /
|_____________________|
| Uninitialized data  |    \
|_____________________|     \  Static/Global
|  Initialized data   |     /    variables
|_____________________|    /
|                     |
|    Text segment     |
|       (code)        |
|_____________________|
</pre>

<br>

## Stack

Where all functions and variables are stored automatically. This data organised by the program during it's execution, so the programmer has no direct control over it. The Stack grows downwards towards the Heap. **N.B: Stack is based upon the stack data structure**

<br>

## Heap

The Heap is controlled manually by the programmer. Here we can [dynamically](#dynamic-memory-allocation) allocated memory using built in functions from the standard library such as [malloc()](#malloc), [calloc()](#calloc), [realloc()](#realloc) and [free()](#free). The Heap grows upwards towards the stack. **N.B: Heap is not based on the heap data structure**

<br>

## Dynamic Memory Allocation

Memory is allocated and deallocated during the runtime of the program

### Advantages:

- Memory is allocated as necessary, so there is no extra cost of unused memory.
- Data structures can grow and shrink according to the requirement, so there is no upper limit of memory space.
- Memory space can be used more efficiently, as dynamic memory can be shared and reused.

### Disadvantages:

- Dynamic memory allocation is slower and more complex, as you have to manage the memory allocation and deallocation yourself.
- It may cause memory fragmentation and memory leaks, if the allocated memory is not freed properly or reused efficiently. To free pointer properly, assuming data type and name: <br> `void *ptr;`<br> `free(ptr);`<br> `ptr = NULL;`
- It may lead to critical situations, such as insufficient memory or invalid pointer errors, if the allocation fails or the pointer is corrupted

<br>

## Memory ctrl functions from C <stdlib.h\>

### malloc():

prototype: `void *malloc(size_t size);`

This function allocates a block of memory of specified size and returns a pointer to it. The memory is not initialized.

### calloc():

prototype: `void *calloc(size_t num, size_t size);`

This function allocates a block of memory for an array of specified number of elements, each of a specified size, and initializes all bytes to zero.

### realloc():

prototype: `void *realloc(void *ptr, size_t size);`

This function changes the size of a previously allocated block of memory, and returns a pointer to the new block. The contents of the old block are preserved up to the minimum of old and new sizes.

### free():

prototype: `void free(void *ptr);`

This function deallocates a block of memory that was previously allocated by malloc(), calloc() or realloc().

<br>

## Using Valgrind to detect memory leaks

To install in your Ubuntu distrubiton: `sudo apt install valgrind`

make sure to add the `-g` flag creating executable

e.g: `gcc -g -o executable`

```powershell
valgrind --leak-check=full <executable>
         #each individual leak will be shown in detail
		 
		 --leak-check=yes <executable>
		 #normal leak check

		 --show-leak-kinds=all <executable>
		 # Show all of "definite, indirect, possible, reachable"...
		 #leak kinds in the "full" report

         --track-origins=yes <executable>
		 #Favor useful output over speed.
		 #This tracks the origins of uninitialized values, ...
		 #which could be very useful for memory errors.
		 #Consider turning off if Valgrind is unacceptably slow

         --verbose <executable>
		 #Can tell you about unusual behavior of your program.
		 #Repeat for more verbosity.

		 --log-file=output.txt <executable>
		 #Write to a file. Useful when output exceeds terminal space.

```
