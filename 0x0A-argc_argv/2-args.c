#include <stdio.h>

/**
 * main - A function thta prints all arguments ir receives
 * @argc: argument count
 * @argv: argument vectors
 *
 * Return: 0(Success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
