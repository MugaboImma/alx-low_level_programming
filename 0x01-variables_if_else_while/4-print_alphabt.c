#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, print all except q and e
 * Return: return 0 (Sucessful)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}

