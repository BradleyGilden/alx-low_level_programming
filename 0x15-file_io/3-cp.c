#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define B_SIZE 1024

/**
 * close_file - checks if closing files returns any errors
 * @fd_val: file descriptor value
 * @close_val: the value close() returns
 */

void close_file(int close_val, int fd_val)
{
	if (close_val < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_val);
		exit(100);
	}
}

/**
 * main - copies text contents from one file to another
 *        uses buffer in order to lessen system calls.
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 if program is successful
 */

int main(int ac, char *av[])
{
	char *file_from, *file_to;
	char buffer[B_SIZE];
	ssize_t br = 0, bw = 0;
	int FDW = 0, FDR = 0;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = av[1], file_to = av[2];

	FDR = open(file_from, O_RDONLY);
	FDW = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((br = read(FDR, buffer, B_SIZE)) > 0)
	{
		bw = write(FDW, buffer, br);
	}
	if (br < 0 || FDR < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (bw < 0 || FDW < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	close_file(close(FDR), FDR);
	close_file(close(FDW), FDW);

	return (0);
}
