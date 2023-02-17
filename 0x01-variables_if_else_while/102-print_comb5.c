#include <stdio.h>

/**
 * main - This prints all possible combinations of two two-digit numbers
 * Return: always 0 (Successful)
 */
int main(void)
{
	int m, v;

	for (m = 0; m < 100; m++)
	{
		for (v = 0; v < 100; v++)
		{
			if (m < v)
			{
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				putchar(' ');
				putchar((m / 10) + 48);
				putchar((v % 10) + 48);
				if (m != 98 || v != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
