#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - A function that creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 if success, or -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int n = 0, text_file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		for (n = 0; text_content[n];)
			n++;
	}
	text_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_file == -1)
		return (-1);
	write(text_file, text_content, n);

	return (1);
}
