# Recursion

**This directory contains functions implemented using recursion**

## Types of Recursion:

### <u>Tail Recursion</u>

This type of recursion occurs when the recursive function is called at the very end of itself<br>e.g :

```c
void count(int num) //simple function that counts from num -> 9
{
	if (num > 9)
		return;
	
	printf("%d", num++);

	count(num); //recursive call
}
```

### <u>Head Recursion</u>

This type of recursion occurs when the recursive function is called at the beginning of itself<br>e.g :

```c
void count(int num) //simple function that counts from 0 -> num
{
	if (num >= 0)
		return (0);
	
	count (num - 1); //recursive call
	printf("%d", num);
}
```

For more information visit <a href="https://www.geeksforgeeks.org/types-of-recursions/">Geeks for Geeks</a>
