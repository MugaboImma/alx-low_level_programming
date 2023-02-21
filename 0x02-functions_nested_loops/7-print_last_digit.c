#include "main.h"
/**
 * print_last_digit - A fuction that prints the last digit of a numbe
 * @n: the interger to extract the last digit
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
		n = -n;

	m = n % 10;

	if (m < 0)
		m = -m;

	_putchar(m + '0');

	return (m);

}



