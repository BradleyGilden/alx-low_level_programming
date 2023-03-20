# Preprocessors in C

- The C Preprocessor is not part of the compilation phase during compilation.
- C Preprocessor is just a text substitution tool and it instructs the compiler to do the required pre-processing before actual compilation.
- All preprocessor commands begin with a pound symbol(#)

## File Contents:

* [0-object_like_macro.h](0-object_like_macro.h) - a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.
* [1-pi.h](1-pi.h) - a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.
* [2-main.c](2-main.c) - a program that prints the name of the file it was compiled from, followed by a new line.
* [3-function_like_macro.h](3-function_like_macro.h) -  a function-like macro `ABS(x)` that computes the absolute value of a number `x`
* [4-sum.h](4-sum.h) - Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

<br>

## List of important preprocessors in C

<table>
<thead>
  <tr>
    <th>Directive</th>
    <th>Description</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td>#define</td>
    <td>Substitutes a preprocessor macro</td>
  </tr>
  <tr>
    <td>#include</td>
    <td>Inserts a particular header from another file</td>
  </tr>
  <tr>
    <td>#undef</td>
    <td>undefines a preprocessor macro</td>
  </tr>
  <tr>
    <td>#ifdef</td>
    <td>Returns true if this macro is defined</td>
  </tr>
  <tr>
    <td>#ifndef</td>
    <td>Returns true if this macro is not defined</td>
  </tr>
  <tr>
    <td>#if</td>
    <td>Tests if a compile time condition is true</td>
  </tr>
  <tr>
    <td>#else</td>
    <td>The alternative for #if</td>
  </tr>
  <tr>
    <td>#endif</td>
    <td>Ends preprocessor conditional</td>
  </tr>
  <tr>
    <td>#error</td>
    <td>Prints error message on stderr</td>
  </tr>
  <tr>
    <td>#pragma</td>
    <td>Issues special commands to the compiler, using a standardized method</td>
  </tr>
</tbody>
</table>

<br>

## Implementation

### #include

```C
#include <stdio.h>      //includes I/O functions like: printf, scanf, vprintf etc
#include "myheader.h"   //includes your own defined header in current directory
```

### #define

```C
#define SIZE 10         //defines a constant variable "SIZE" with value 10
```

### #undef

```C
#define SIZE 10
#undef SIZE             //undoes #define, useful for built in macros
```

### #ifndef

```C
#ifndef GREET                //checks if GREET is already defined in the program. 
#define GREET "Hello World!" //If GREET is already defined it will not define it again,
                             //otherwise it will define GREET

#endif
```
<br>

## Predefined macros

<table>
<thead>
  <tr>
    <th>Macro</th>
    <th>Description</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td>_DATE_</td>
    <td>The current date as a character literal in "MM DD YYYY" format</td>
  </tr>
  <tr>
    <td>_TIME_</td>
    <td>The current time as a character literal in "HH:MM:SS" format</td>
  </tr>
  <tr>
    <td>_FILE_</td>
    <td>This contains the current filename as a string literal</td>
  </tr>
  <tr>
    <td>_LINE_</td>
    <td>This contains the current line number as a decimal constant.</td>
  </tr>
  <tr>
    <td>_STDC_</td>
    <td>Defined as 1 when compiler compiles with the ANSI standard</td>
  </tr>
</tbody>
</table>

<br>

## Preprocessor operators

- Macro continuation (\\)
  - allows macro to continue to next line

```C
#define greet(a, b) / 
printf(#a " " #b", have a nice day")

```

- Stringize (#)
  - converts macro parameter into a string constant

```C
#define greet(a, b) /
printf(#a " " #b", have a nice day")

int main(void)
{
	greet(Hello, neighbour);
}

```

```
//output

Hello neighbour, have a nice day
```

- Token Pasting (##)
  - Permits two seperate tokens in macro definition to be defined as a single token


```C
#define token_paste(n) /
printf("token" #n " = %d", token##n)

int main(void)
{
	int token10 = 21;
	token_paste(10);
}

```

```
//output

token10 = 21
```
