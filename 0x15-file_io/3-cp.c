#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"

/**
 * main - Entry point for checking code of Holberton School students.
 *
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int dur, pi, top_up, m, n;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	pi = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (pi == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
	dur = open(argv[1], O_RDONLY);
	if (dur == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
	while (1)
	{
		n = read(dur, buffer, 1024);
		if (n == -1)
			dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
		if (n > 0)
		{
			m = write(pi, buffer, n);
			if (m == -1)
				dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
		} else
			break;
	}
	top_up = close(dur);
	if (top_up == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dur), exit(100);
	top_up = close(pi);
	if (top_up == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", pi), exit(100);
	return (0);
}
