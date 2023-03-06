 # Even More Pointers, Arrays and Strings

 **This directory deals with uses of double pointers, multidimensional arrays and more string manipulation**

 <h2>Hard Coded C functions:</h2>

 to read more on these C function type: `man <function_name>`
 
 - memset
 - memcpy
 - strchr
 - strspn
 - strbrk
 - strstr

<h2>Memory allocation of pointers</h2>

 ```c
 #include<stdio.h>

 /**
  * main - this function describes byte size of pointers...
  *        and double pointers
  *
  * Return: 0 always
*/

 int main(void)
 {
	int n = 5;				//assigning value to n
	int *ptr = &n;			//storing address of n in ptr
	int **pptr = &ptr;		//storing address of ptr in pptr

	printf("sizeof(n):    %lu\n", sizeof(n));
	printf("sizeof(p):    %lu\n", sizeof(p));
	printf("sizeof(pp):   %lu\n", sizeof(pp));
	printf("sizeof(*p):   %lu\n", sizeof(*p));
	printf("sizeof(*pp):  %lu\n", sizeof(*pp));
	printf("sizeof(**pp): %lu\n", sizeof(**pp));
	return (0);
 }
 ```
 **output :**

 ```
 sizeof(n):      4
 sizeof(ptr):    8
 sizeof(pptr):   8
 sizeof(*ptr):   4
 sizoef(*pptr):  8
 sizeof(**pptr): 4
 ```
 <p> <b>conclusion:</b> &nbsp&nbsp Size of pointers and double pointers are the same.<br>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbspWhen required to dereference to int, size of *ptr and **pptr = sizeof(int).</p>
