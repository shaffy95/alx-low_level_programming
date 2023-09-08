#include "main.h"

/**
 * binary_to_uint- convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int sam = 0, m;
	unsigned int num = 0, non_bin = 0;

	if (b == NULL)
		return (non_bin);

	while (b[sam] != '\0')
		sam++;
	sam -= 1;
	m = 0;
	while (b[m])
	{
		if ((b[m] != '0') && (b[m] != '1'))/*&& logical AND operator*/
			return (non_bin);

		if (b[m] == '1')
			num += (1 * (1 << sam));/*<< bitwise left shift operator*/
		m++;

		sam--;
	}
	return (num);
}
