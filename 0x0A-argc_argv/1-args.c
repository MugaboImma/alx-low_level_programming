#include <stdio.h>

/**
 * main - A function that printsthe number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0(success)
 */
int main(int argc, char **argv)
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
