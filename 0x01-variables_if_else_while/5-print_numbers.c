#include <stdio.h>

/**
 * main - This prints all single digit numbers of base
 * 10 starting from 0, followed by a new line
 * Return: return 0 (Successful)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}