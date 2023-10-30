#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 *
 * @filename: The path to the file.
 * @text_content: The content to append.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int mt;
	ssize_t p;
	int size;

	if (!filename)
		return (-1);

	mt = open(filename, O_WRONLY | O_APPEND);

	if (mt == -1)
		return (-1);

	if (!text_content)
	{
		close(mt);
		return (1);
	}

	size = _strlen(text_content);
	p = write(mt, text_content, size);

	if (p == -1)
	{
		close(mt);
		return (-1);
	}
	close(mt);
	return (1);
}

/**
 * _strlen - Computes the length of a string.
 *
 * @s: A pointer to a character string.
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
