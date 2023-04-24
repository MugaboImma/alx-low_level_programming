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
	int n_chars = 0;
	int text_file, wr_file;

	if (!filename)
		return (-1);

	text_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!text_content)
		text_content = "";
	if (text_file == -1)
		return (-1);
	for (n_chars = 0; text_content[n_chars]; n_chars++)
		;
	wr_file = write(text_file, text_content, n_chars);

	if (wr_file == -1)
		return (-1);

	close(text_file);
	return (1);
}
