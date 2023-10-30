#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"

/**
 * main - check the code for Holberton School students.
 * @argc: num of args
 * @argv: args
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int rom, dest, top_up, m, n;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_rom file_dest\n"), exit(97);
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
	rom = open(argv[1], O_RDONLY);
	if (rom == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
	while (1)
	{
		n = read(rom, buffer, 1024);
		if (n == -1)
			dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
		if (n > 0)
		{
			m = write(dest, buffer, n);
			if (m == -1)
				dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
		} else
			break;
	}
	top_up = close(rom);
	if (top_up == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", rom), exit(100);
	top_up = close(dest);
	if (top_up == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);
	return (0);
}
