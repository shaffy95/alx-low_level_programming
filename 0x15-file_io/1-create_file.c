#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - Creates a file or appends to it.
 * @filename: The path to the file.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int mt;
	ssize_t p;
	int size;
	char *chart;

	if (!filename)
	{
		return (-1);
	}
	mt = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (mt == -1)
		return (-1);
	if (!text_content)
	{
		close(mt);
		return (1);
	}
	size = _strlen(text_content);
	chart = malloc(sizeof(char) * size);
	if (!chart)
	{
		close(mt);
		return (-1);
	}
	p = write(mt, text_content, size);
	if (p == -1)
	{
		close(mt);
		free(chart);
		return (-1);
	}
	close(mt);
	free(chart);
	return (1);
}

/**
 * _strlen - Returns the length of a string.
 *
 * @s: A pointer to a character.
 *
 * Return: The length of the string.
 */

int _strlen(const char *s)
{
	int m = 0;

	while (*(s + m) != '\0')
	{
		m++;
	}

	return (m);
}
