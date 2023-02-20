#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always return 0 (Successful)
 */
int main(void)
{
	int az;

	for (az = 'a'; az <= 'z'; az++)
		putchar(az);
	for (az = 'A'; az <= 'Z'; az++)
		putchar(az);
	putchar('\n');
	return (0);
}

