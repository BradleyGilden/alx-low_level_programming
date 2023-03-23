# Variadic Functions

Variadic function are functions that can have a variable amount of arguments. Variadic functions consist of atleast one fixed variable and then elipsis `(...)` as the last parameter

prototype example:
```C 
int function(type var_name, ...);
``` 
N.B the function can return other data types as well.

The C Library's printf function implements variadic function in the following way:

prototype:
```C
int printf(const char *format, ...);
```

N.B it uses `%` to count number of arguments printf should have.

## Directory Contents

* [variadic_functions.h](variadic_functions.h) - header file containing prototypes for the following list of functions.
* [0-sum_them_all.c](0-sum_them_all.c) - a function that returns the sum of all its parameters.
* [1-print_numbers.c](1-print_numbers.c) - a function that prints numbers, followed by a new line.
* [2-print_strings.c](2-print_strings.c) - a function that prints strings, followed by a new line.
* [3-print_all.c](3-print_all.c) - a function that prints anything.


<br>

## Basic Implementation

in order to utllizie variadic functions we must include the `<stdarg.h>` header file.

### stdarg methods:

| Methods | Description |
| :------ | :---------- |
| `va_start(va_list argP, argN)` | This function enables access to variable function arguments<br><br>`va_list` - is a pointer to the last fixed argument in the list.<br>`argN` - the last fixed argument in the list<br><br>Therefore in this example `va_list argP` is a pointer to argN|
| `va_arg(va_list argP, type)` | This function access the next argument<br><br>`type` - this indicates the data type `va_list argP` should expect (how many bytes it should read for a particular data type). |
| `va_copy(va_list dest, va_list src)` | This function makes a copy of the variadic function arguments |
| `va_end(va_list argP)` | This ends the traversal of the variadic function arguments |

### The `const` keyword:

In C, `const` is used to tell the compiler that a variable's value should not be altered e.g:

```C
int main(void){
	const int num = 5;
	num = 6;  //Altering value will result in compiler error
	return (0);
}
```
```
**COMPILATION ERROR MESSAGE**
```
similarly we can use const keyword when dealing with pointers

```C
int main(void){
	char str[] = "Goodbye, Universe!"

	const char *ch_address = "Hello, World!"
	char * const ch_value = "Greetings, Earthlings!"
	const char * const no_ch = "Cant Touch This"

	ch_address = str; //We can still point to another address
	ch_address[0] = 'Y'; //But we cannot alter value at address

	ch_value = str; //We cannot change address we're pointing to
	ch_value[0] = 'Y'; //But we can change value at address

	no_ch = str; //We cannot change address we're pointing to
	no_ch = 'Y' //Nor can we change the value at the address
}
```
