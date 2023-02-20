#include <stdio.h>

/**
 * main - This prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always return 0 (Successful)
 */
int main(void)
{
	char za;

	for (za = 'a'; za <= 'z'; za++)
	{
		putchar(za);
	}
	putchar('\n');
	return (0);
}
