#include <unistd.h>

/**
 * _putchar - A function that writes a character c to standard out
 * @c: a character c
 *
 * Return: 1 (success) or -1 (error)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
