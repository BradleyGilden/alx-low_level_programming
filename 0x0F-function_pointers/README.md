# Function Pointers

Function pointers in C can be used to create function calls to which they point. This allows programmers to pass them to functions as arguments. Such functions passed as an argument to other functions are also called callback functions.

## List of Contents
1. Section 1
   * [function_pointers.h](function_pointers.h) - header file that contains function prototypes of the C files `[0-2]*.c`
   * [0-print_name.c](0-print_name.c) - a function that prints a name
   * [1-array_iterator.c](1-array_iterator.c) - a function that executes a function given as a parameter on each element of an array
   * [2-int_index.c](2-int_index.c) -  a function that searches for an integer
2. Section 2
   * [3-calc.h](3-calc.h) - header file that contains structs and function prototypes of the C files `3*.c`
   * [3-op_functions.c](3-op_functions.c) - contains functions that return a result of sum depending on the call from `get_op_func(char *s)(int, int)` in the [main function](3-main.c)
   * [3-get_op_func.c](3-get_op_func.c) - contains the function that selects the correct function (from `3-op_functions.c`) to perform the operation that was placed in the function arguments e.g:
     ```powershell
	 ./calc 5 '*' 3
	 ```
	 ```C
	 result = get_op_func("*")(num1, num2) //inside main function
	 ```
   * [3-main.c](3-main.c) - takes in the programs arguments and manipulates them to call the correct operation. If the arguments are incorrectly formatted, the program will exit with an error e.g:
     ```powershell
	 ./calc 10 '+' 2
	 12
	 ./calc 10
	 Error
	 ./calc 10 '$' 2
	 Error
     ```

<br>

## Diving Deeper

1. Unlike normal pointers, a function pointer points to code, not data. Typically a function pointer stores the start of executable code.

2. Unlike normal pointers, we do not allocate de-allocate memory using function pointers. 

   ```C
	int Add(int x, int y){
		return (x + y);
	}
	
	int main(void){
		int *ptr(int, int);
		ptr = &Add;
		c = (*ptr)(2, 3); //same as Add(2, 3)
		//If we remove bracket, 
		///then the expression “(*ptr)(int, int)” becomes *ptr(int, int)” 
		//which is declaration of a function that returns void pointer
	}
	```

 
3. A function’s name can also be used to get functions’ address. For example, in the below program, we have removed address operator ‘&’ in assignment. We have also changed function call by removing *, the program still works.

   ```C
	int main(void){
		int *ptr(int, int);
		ptr = Add;
		c = ptr(2, 3); //same as Add(2, 3)
	}
	```

4. We can also use function pointers as a switch case by initializing it to multiple functions as an array of pointers.

	```C
	void add(int a, int b)
	{
		printf("\nAddition is %d\n", a+b);
	}
	void subtract(int a, int b)
	{
		printf("\nSubtraction is %d\n", a-b);
	}
	void multiply(int a, int b)
	{
		printf("\nMultiplication is %d\n", a*b);
	}
	
	int main()
	{
		// fun_ptr_arr is an array of function pointers
		void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};

		int choice, a = 15, b = 10;

		printf("Enter choice (1 -> add, 2 -> subtract, 3 -> multiply): ")
		scanf("%d", &choice);

		if (choice > 2) return 0;
	
		(*fun_ptr_arr[ch])(a, b);
	
		return 0;
	}
	```
```
Enter choice (1 -> add, 2 -> subtract, 3 -> multiply): 1

Addition is 25
```
5. Like pointers to other data types, fuction pointers can exist as an argument in a function as well as be returned from a function.

	```C
	int compare(int x, int y)
	{
		return (x > y ? 1 : -1)
	}

	void swap(int x, int y)
	{
		int temp;

		temp = x;
		x = y;
		y = temp;
	}

	void bubble_sort(int *arr, int size, int (*cmp)(int, int), void (*swp)(int, int))
	{
		int i, j;

		for (i = 0; i < size; i++){
			for (j = 0; j < size - 1; j++){
				if (cmp(arr[i], arr[j + 1]) > 0) // calling compare function
				{
					swp(arr[j], arr[j + 1]);     //calling swap function
				}

			}
		}
	}

	int main(void)
	{
		int i, arr[] = {31, 5, 8, 2, 64, 34, 231, 26}
		
		bubble_sort(arr, 8, compare, swap);
		
		for (i = 0; i < 8; i++)
			printf("%d ", arr[i]);
	}
	```
```
2 5 8 26 31 34 64 231
```

<br>

## Sources:

* [mycodeschool (1)](https://www.youtube.com/watch?v=ynYtgGUNelE)
* [mycodeschool (2)](https://www.youtube.com/watch?v=sxTFSDAZM8s&t=536s)
* [GeeksforGeeks](https://www.geeksforgeeks.org/function-pointer-in-c/)
