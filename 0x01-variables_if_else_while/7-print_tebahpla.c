#include <stdio.h>

/**
 * main - This prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always return 0 (Successful)
 */
int main(void)
{
	char za;

	for (za = 'z'; za >= 'a'; za--)
	{
		putchar(za);
	}
	putchar('\n');
	return (0);
}
