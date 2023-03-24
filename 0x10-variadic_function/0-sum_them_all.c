#include "variadic_functions.h"


/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: the number of parameters passed to the function
 *@...: a variable number of parameters to calculate the sum of
 *
 * Return: if n == 0, return 0
 * otherwise, the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (n == 0)
		return (0);


	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}