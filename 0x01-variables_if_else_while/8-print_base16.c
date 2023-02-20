#include <stdio.h>

/**
 * main - This prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always return 0 (Successful)
 */
int main(void)
{
	int m;
	char v;

	for (m = 48; m < 58; m++)
	{
		putchar(m);
	}
	for (v = 'a'; v <= 'f'; v++)
	{
		putchar(v);
	}
	putchar('\n');
	return (0);
}
