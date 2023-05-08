#include "main.h"

/**
 * create_file - a function that creates a file.
 *                 if text_content is NULL, create an empty file.
 *                 if file already exists, truncate it.
 *                 file created must have permissions: rw- --- ---
 *
 * @filename: pointer to string literal of the filename to write to
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on sucess -1 on failure
 *         in case of failure
 *         if file could not be read or opened.
 *         if filename is NULL
 *         if write fails or does not write expected number of bytes.
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, textlen = 0, FD = 0;
	ssize_t bw = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[i++])
		textlen++;

	FD =  open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (FD < 0)
		return (-1);
	bw = write(FD, text_content, textlen);
	if (bw < 0)
		return (-1);

	return (1);
}
