#include "main.h"

/**
 * clear_bit - Sets the bit at a given index to 0.
 *
 * @n: The number to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if successful, or -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int number = 1;

	if (index > (sizeof(unsigned long int) * 10))

		return (-1);

	number = ~(number << index);/*bitwise Not operator is an unary operator*/
	/*which is why we use the () to nest our left shift operator*/

	*n = *n & number;/*bitwise AND operator*/

	return (1);

}
