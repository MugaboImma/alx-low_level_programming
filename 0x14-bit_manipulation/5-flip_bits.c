#include "main.h"

/**
 * flip_bits -  A function that returns the number of bits you woul need
 * to flip to get from one num to another
 * @m: number
 * @n: number to flip m to
 *
 * Return: number of bits to flip to get from m to n
 */

unsigned int flip_bits(unsigned long int m, unsigned long int n)
{
	unsigned long int xor = m ^ n, f_bits = 0;

	while (xor > 0)
	{
		f_bits += (xor & 1);
		xor >>= 1;
	}
	return (f_bits);
}
