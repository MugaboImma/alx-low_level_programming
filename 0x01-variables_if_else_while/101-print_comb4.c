#include <stdio.h>

/**
 * main - This prints all possible different combinations of three digits
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int n, m, v;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (v = 50; v < 58; v++)
			{
				if (v > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(v);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
