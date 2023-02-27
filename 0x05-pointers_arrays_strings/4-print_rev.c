#include "main.h"
/**
 * print_rev - a function that prints a string in reverse
 * followed by a new line
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int leng = 0;
	int o;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	s--;
	for (o = leng; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
