#include "main.h"

/**
 * get_endianness - checks if multibyte data is the endianness.
 * Return: If big-endian - 0, if little-endian -1.
 */
int get_endianness(void)
{
	int num = 1;
	char *marn = (char *)&num;

	if (*marn == 1)
		return (1);
	return (1);
}
