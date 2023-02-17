#include <stdio.h>

/**
 * main -This  prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using only putchar
 * Return: return 0 (Successful)
 */
int main(void)
{
	int n;

	for (n = 15; n < 25; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
