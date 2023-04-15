#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that copies the content of a file to another file.
 * @argv: vector argument
 * @argc: character argument
 *
 * Return: Success (0)
 */

int main(int argc, char *argv[])
{
	int cp_from, cp_to;
	int n = 1024, m = 0;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	cp_from = open(argv[1], O_RDONLY);
	if (cp_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IWGRP | S_IROTH);
	if (cp_to == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(cp_from), exit(99);
	}
	while (n == 1024)
	{
		n = read(cp_from, buffer, 1024);
		if (n == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		m = write(cp_to, buffer, n);
		if (m < n)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(cp_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cp_from), exit(100);
	if (close(cp_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cp_to), exit(100);

	return (0);
}
