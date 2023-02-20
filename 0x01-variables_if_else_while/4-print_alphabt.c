#include <stdio.h>

/**
 * main -This prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways return 0 (Sucessful)
 */
int main(void)
{
	char az = 'a';

	while (az <= 'z')
	{
		if (az != 'e' && az != 'q')
		{
			putchar(az);
		}
		az++;
	}
	putchar('\n');
	return (0);
}

