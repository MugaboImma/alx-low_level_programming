#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 *
 * Return: 1 (Success)
 * on error, return -1, errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
