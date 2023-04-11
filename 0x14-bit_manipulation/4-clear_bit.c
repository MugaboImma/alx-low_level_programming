#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index
 * @m: A pointer to the bit
 * @index: The index to set the value
 *
 * Return: 1 if it worked or -1 if error occured
 */

int clear_bit(unsigned long int *m, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*m &= ~(1 << index);
	return (1);
}
