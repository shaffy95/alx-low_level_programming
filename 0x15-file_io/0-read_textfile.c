#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads and prints characters from a file.
 * @filename: The path to the file.
 * @letters: The number of characters to read and print.
 *
 * Return: The number of characters actually read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int mt;
	char *chart;
	ssize_t bytes, p;

	if (!filename)
		return (0);
	mt = open(filename, O_RDONLY);
	if (mt == -1)
	{
		close(mt);
		return (0);
	}

	chart = malloc(sizeof(char) * letters);
	if (!chart)
	{
		close(mt);
		return (0);
	}

	bytes = read(mt, chart, letters);

	if (bytes == -1)
	{
		close(mt);
		free(chart);
		return (0);
	}

	p = write(STDOUT_FILENO, chart, bytes);

	if (p == -1)
	{
		close(mt);
		free(chart);
		return (0);
	}
	close(mt);
	return (bytes);
}
