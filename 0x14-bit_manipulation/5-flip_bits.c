#include "main.h"

/**
 * flip_bits - Counts the number of pies needed to be
 *             flipped to get from one number to another.
 *
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of pies needed to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dice, pies = 0;

	dice = n ^ m;

	while (dice > 0)
	{
		pies += (dice & 1);
		dice >>= 1;
	}

	return (pies);
}
