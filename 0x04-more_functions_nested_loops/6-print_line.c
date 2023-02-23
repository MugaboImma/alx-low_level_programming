#include "main.h"

/**
 * print_line - A funtion that draws a straight line in the terminal
 * where n is the number of times the character _ should be printed
 * the line should end with a \n
 * if n is 0 or less, the function should only print \n
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;

for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}

}


