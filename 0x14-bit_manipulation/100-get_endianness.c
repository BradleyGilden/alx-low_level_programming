#include "main.h"

/**
 * get_endianness - checks endianess of your system
 *
 * Return: 1 if little endian
 *         0 if big endian
 */

int get_endianness(void)
{
	unsigned int bit_check = 0x01;
	char single_byte = (char)bit_check;

	if (single_byte != 0)
		return (1);

	else
		return (0);
}
