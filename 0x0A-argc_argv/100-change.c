#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints min number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0(Success)
 */
int main(int argc, char **argv)
{
	int total, count;
	unsigned int n;
	char *p;
	int currency[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = strtol(argv[1], &p, 10);
	count = 0;

	if (!*p)
	{
		while (total > 1)
		{
			for (n = 0; n < sizeof(currency[n]); n++)
			{
				if (total >= currency[n])
				{
					count += total / currency[n];
					total = total % currency[n];
				}

			}

		}
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", count);
	return (0);
}

