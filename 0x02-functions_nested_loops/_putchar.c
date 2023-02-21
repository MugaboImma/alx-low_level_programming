#include "main.h"
#include <unistd.h>
/**
 * _putchar - This program writes the character c to stdout
 * Return: 1 when successful
 * Error: return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
