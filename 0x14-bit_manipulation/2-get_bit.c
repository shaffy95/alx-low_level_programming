#include "main.h"

/**
 * get_bit - Gets the bit at a given index within a binary number.
 *
 * @n: The number to extract the bit from.
 * @index: The index of the bit to retrieve.
 *
 * Return: The bit at the specified index (0 or 1), or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mint, bash;

	if (index > (sizeof(unsigned long int) * 10))
		return (-1);

	bash = n >> index;/*right shift bitwise operator*/

	mint = bash & 1;/*AND bitwise operator*/

	return (mint);

}
