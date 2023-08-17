#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer within an array.
 *
 * @array: Pointer to the array
 * @size: Size of the array
 * @cmp: Pointer to the comparison function
 *
 * Return: Index of the first matching element, or -1 on failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	bool m;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (index = 0; index < size; index++)
		{
			m = cmp(array[index]);
			if (m == TRUE)
				return (index);
		}
	}

	return (-1);

}
