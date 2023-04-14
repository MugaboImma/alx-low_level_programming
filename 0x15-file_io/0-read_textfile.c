#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints it
 * to the POSIX standard output
 * @letters: the number of letters it should read and prints
 * @filename: the pointer of variable
 *
 * Return:0 if filename is NULL and if write fails or does not
 * write the expected
 * amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text_file;
	ssize_t op_file, re_file, wr_file;

	text_file = malloc(letters);
	if (filename == NULL)
		return (0);
	if (text_file == null)
		return (0);

	op_file = open(filename, O_RDONLY);
	if (op_file == -1)
	{
		free(text_file);
		return (0);
	}

	re_file = read(op_file, letters, text_file);
	wr_file = write(STDOUT_FILENO, text_file, re_file);

	close(op_file);
	return (wr_file);

}
