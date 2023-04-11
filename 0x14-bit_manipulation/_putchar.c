#include <unistd.h>
#include "main.h"

/**
 * _putchar - The program that writes the character a
 * @a: The character to print
 *
 * Return:success
 */

int _putchar(char a)
{
	return (write(1, &a, 1));
}
