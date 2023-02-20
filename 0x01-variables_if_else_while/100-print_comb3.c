#include <stdio.h>

/**
 * main - This prints all possible different combinations of two digits
 * Return: ALways return 0 (Successful)
 */
int main(void)
{
	int v, m;

	for (v = 48; v <= 56; v++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > v)
			{
				putchar(v);
				putchar(m);
				if (v != 56 || m != 57)
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
