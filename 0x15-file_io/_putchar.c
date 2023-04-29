#include "main.h"

/**
 * _putchar - A function that writes a character c to stdout
 * @c: character to print out
 *
 * Return: 1 (Successful) or -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
