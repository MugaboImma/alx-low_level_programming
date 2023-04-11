#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 * @m: bit
 * @index: the index to return the value
 *
 * Return: -1 if an error, or the value of a bit at index
 */

int get_bit(unsigned long int m, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((m & (1 << index)) == 0)
		return (0);
	return (1);
}
