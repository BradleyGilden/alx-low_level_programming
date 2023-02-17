 # This directory contains tasks based on conditionals and loops

 **Valid styles to be used in accordance of betty:**


 ```c
	//1
	a = 0;
	for (; a < b;)
	{
		printf("%d\n", a++);
	}

	//2
	for (a = 0; a < b; a++)
		printf("%d\n", a);

	//3
	for (a = 0; a < b; a++)
	{
		printf("%d\n", a);
	}

	//4
	a = 0;
	while (a < b)
		printf("%d\n", a++);

	//5
	a = 0;
	while (a < b)
	{
		printf("%d\n", a);
		a++;
	}

	//6
	a = 0;
	do {
		printf("%d\n", a);
		a++;
	} while (a < b);

	//7
	if (a > b)
	  return (a);

	//8
	if (a > b)
	{
	  return (a);
	}

 ```

