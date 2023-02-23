#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line on the terminal
 * where n is the number of times the character \ should be printed
 * the diagonal should end with a \n
 * if n is 0 or less, the function should only printed a \n
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == i)
_putchar('\\');
else if (j < i)
_putchar(' ');
}
_putchar('\n');
}
}
}


