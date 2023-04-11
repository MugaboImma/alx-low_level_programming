#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index
 * @m: A pointer to the bit
 * @index: The index to set the value
 *
 * Return: 1 if it worked, or -1 if error occured
 */

int set_bit(unsigned long int *m, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*m ^= (index << 1);
	return (1);
}
