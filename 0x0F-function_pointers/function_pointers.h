#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_
#define NULL ((void *)0)

typedef unsigned long size_t;

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /*_FUNCTION_POINTERS_H_*/
