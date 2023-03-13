#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vectors
 *
 * Return: 0(Success)
 */
int main(int argc, char **argv)
{
int a, b;

if (argc < 3)
{
	printf("Error\n");
	return (1);
}

a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);

return (0);
}
