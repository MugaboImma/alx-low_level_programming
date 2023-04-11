#include "main.h"

/**
 * get_endianness - A function that checks the endianness
 *
 * Return: 0 if big endian, or 1 if little endian
 */

int get_endianness(void)
{
	int n = 1;
	char *endian = (char *)&n;

	if (*endian == 1)
		return (1);
	return (0);
}
