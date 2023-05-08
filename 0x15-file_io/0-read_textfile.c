#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *                 to the POSIX standard output.
 * @filename: pointer to string literal of the filename to read
 * @letters: the number of letters to be read and printed to screen.
 *
 * Return: actual number of letters that was read and printed.
 *         0 if file could not be read or opened.
 *         0 if filename is NULL
 *         0 if write fails or does not write expected number of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int FD = 0;
	size_t letter_count = sizeof(char) * letters;
	ssize_t bytes_read = 0, bytes_written = 0;
	char *buffer;

	if (filename == NULL)
		return (0);


	FD = open(filename, O_RDONLY);
	if (FD < 0)
		return (0);

	buffer = malloc(letter_count);
	if (buffer == NULL)
		return (0);

	bytes_read = read(FD, buffer, letter_count);
	if (bytes_read < 0)
	{
		free(buffer);
		return (0);
	}


	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written < 0 || bytes_written != bytes_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(FD);

	return (bytes_written);
}
