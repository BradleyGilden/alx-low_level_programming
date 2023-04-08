#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 *                       if text_content is NULL, do not add anything to file.
 *                       if file already exists, truncate it.
 *
 * @filename: pointer to string literal of the filename to write to
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on sucess -1 on failure
 *         in case of failure:
 *         if file could not be read or opened.
 *         if filename is NULL
 *         if write fails or does not write expected number of bytes.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, textlen = 0, FD = 0;
	ssize_t bw = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[i++])
		textlen++;

	FD =  open(filename, O_WRONLY | O_APPEND);
	if (FD < 0)
		return (-1);

	bw = write(FD, text_content, textlen);
	if (bw < 0)
		return (-1);

	return (1);
}
