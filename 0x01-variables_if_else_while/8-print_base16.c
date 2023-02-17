#include <stdio.h>

/**
 * main - This program prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: return 0 (Successful)
 */
int main(void)
{
	int n;
	char hexa;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	for (hexa = 'a'; hexa <= 'f'; hexa++)
	{
		putchar(hexa);
	}
	putchar('\n');
	return (0);
}
