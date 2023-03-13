#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vectors
 *
 * Return: 0(Success)
 */
int main(int argc, int **argv)
{
	int i, j, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i]; i++)
	{
		j = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += j;
		}
	}
	printf("%d\n", sum);
	return (0);
}
