#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory
 * which contains the contents of s1, followed by contents of s2,
 * and null terminated, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int n, m, len1, len2, len;
	char *result;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		n = 0;
		while (s1[n++] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		n = 0;
		while (s2[n++] != '\0')
			len2++;
	}

	len = len1 + len2;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);

	for (n = 0; n < len1; n++)
		result[n] = s1[n];
	for (m = 0; m < len2; m++, n++)
		result[n] = s2[m];
	result[len] = '\0';

	return (result);
}
