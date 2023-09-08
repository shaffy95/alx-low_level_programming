#include "main.h"
#include <stdio.h>

/**
 * print_binary - Converts an unsigned integer to binary.
 *
 * @n: The unsigned integer to convert.
 *
 * Return: Binary representation of the unsigned integer.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
