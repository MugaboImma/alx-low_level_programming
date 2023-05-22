#include "main.h"
/**
 * _strspn -A function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
			if (*s == accept[l])
			{
				n++;
				break;
			}
			else if (accept[l + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
