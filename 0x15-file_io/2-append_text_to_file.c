#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * append_text_to_file - A function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 if success, or -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int n = 0, text_file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = '';
	while (text_content[n] != '\0')
	{
		n++;
	}
	text_file = open(filename, O_WRONLY | O_APPEND);

	if (text_file == -1)
		return (-1);
	write(text_file, text_content, n);

	return (1);
}
