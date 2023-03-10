# cmd line arguments: argc, argv[]

<h2>What is <b>argc</b>?</h2>

- short for argument count
- number of command line arguments

<h2>What is <b>argv[]</b>?</h2>

- short for argument vector
- stores command line arguments as strings
- maximum arguments stored in <b>*argv[]</b> is <b>argc</b>

<h2>Example of using argc & argv:</h2>

```powershell
#terminal input

cat main.c
```

```C
//terminal output
int main(int argc, char *argv[])
{
	for(int i = 0; i < argc; i++)
	{
		printf("argv[%d]: %s\n", i, argv[i]);
	}
}
```

```powershell
#terminal input

gcc main.c -o main
./main hello world
```

```powershell
#terminal output
argv[0]: ./main
argv[1]: hello
argv[2]: world
```
