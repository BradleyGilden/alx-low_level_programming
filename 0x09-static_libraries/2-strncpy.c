#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies n bytes of src to dest.
 *            if n > src bytes then null terminate rest of dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: address of dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0, slen = 0;

	/*slen is src length*/

	while (src[j++])
		slen++;

	/*replace contents with that of src*/
	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];

	/*make sure everything after slen is null terminated*/
	for (j = slen; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
