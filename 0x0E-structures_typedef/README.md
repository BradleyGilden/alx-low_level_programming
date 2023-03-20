# Structs

**Structs are useful in C language when we want to store related data but of different types for example:**

Book Data <br>&emsp;&emsp;↓ <br>Title<br>Author<br>ISBN No.<br>Price

## List of Cotents:

* [dog.h](dog.h) - header file containing struct definitions and function definitions.
* [1-init_dog.c](1-init_dog.c) - a function that initialize a variable of type struct dog.
* [2-print_dog.c](2-print_dog.c) - a function that prints a struct dog.
* [4-new_dog.c](4-new_dog.c) - a function that creates a new dog dynamically.
* [5-free_dog.c](5-free_dog.c) - a function that frees dogs from memory.

We can create a struct called **BOOK** that will store all our information, we can initialise this in various ways:

1. ```C
	struct BOOK {
	char Title[50];
	char Author[20];
	long int ISBN;
	float Price;
	};
	
	int main(void){
		struct BOOK book = {"The Enemy", "Charlie Higson", 9781423131755, 199.99};
		//"struct BOOK" is the type
		//we then assign a name to this type "book", similar to...
		//TYPE          NAME
		//              
		//char          book
		//struct BOOK   book
	}
	```

2. ```C
	typedef struct BOOK {
	char Title[50];
	char Author[20];
	long int ISBN;
	float Price;
	}BOOK;
	//using typedef we can assign type "struct BOOK" as just "BOOK"
	int main(void){
		BOOK book = {"The Enemy", "Charlie Higson", 9781423131755, 199.99};
		//we now have no need to add "struct" to declaration

		book.Price = 399.99; // we can also alter elements of a struct this way
		book.Author = "Anonymous";
	}
	```

## Passing structs by value and by reference

### By value:

Assume we're using struct BOOK from the previous example
non-typedef example

```C
//struct declaration goes here

void print_struct(struct BOOK book)//we would just use BOOK book if we used typdef...
{					                //in our struct
	printf("The title of the book is %s\n", book.Title);
	printf("Written by the genius author %s\n" book.Author);
	printf("Now going on sale at a low price of R%.2f, only in selected stores\n", book.Price);
	printf("You can find this book by it's ISBN: %ld.\n", book.ISBN);
} 

int main(void){
	struct BOOK book = {"The Enemy", "Charlie Higson", 9781423131755, 99.99};
	print_struct(book);
}

```

Output:

```
The title of the book is The Enemy
Written by the genius author Charlie Higson
Now going on sale at a low price of R99.99, only in selected stores
You can find this book by it's ISBN: 9781423131755
```

### By reference:

```C
#include "previous_function"
//struct declaration goes here

void print_struct(struct BOOK book); //prototype for previous function
									 //we can pretend it was defined in another file
void change_price(struct BOOK *book)//we would just use BOOK *book if we used typdef...
{					                //in our struct
	book->price = 59.99;
} 

int main(void){
	struct BOOK book = {"The Enemy", "Charlie Higson", 9781423131755, 99.99};

	change_price(&book);
	print_struct(book);
}

```

Output:

```
The title of the book is The Enemy
Written by the genius author Charlie Higson
Now going on sale at a low price of R59.99, only in selected stores
You can find this book by it's ISBN: 9781423131755
```

## Array of structs

we can also create an array of structs

```C
struct BOOK{
char Title[50];
char Author[20];
long int ISBN;
float Price;
};

int main(void){
	struct BOOK book[3]; //declaring struct array
	//we can fill in these values from user input:
	for (int i = 0; i < 3; i++)
	{
		printf("Enter title:"):
		scanf("%s", book[i].Title);
		printf("\nEnter author:");
		scanf("%s", book[i].Author);
		printf("\nEnter price:");
		scanf("%f", &book[i].Price);	//..............

	}
}
```

## Nested Structs

we can also define a struct in another struct

```C
struct BOOK{
char Title[50];
char Author[20];
long int ISBN;
float Price;
};

struct LIBRARY{
	char name[20];
	int tel;
	struct BOOK book;
}

int main(void){
	struct LIBRARY lib;
	lib.name = "The Black Quill";
	lib.tel = 08005969;
	lib.book.Title = "Pride & Prejudice";
	lib.book.Price = 80.99;
}

```
