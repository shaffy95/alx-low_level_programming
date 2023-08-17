#include <stddef.h>

/**
 * array_iterator - Applies a given function to each element of an array.
 *
 * @array: Array to iterate through
 * @size: Size of the array
 * @action: Pointer to the function to apply
 *
 * Return: No return value; handles cases where @array or @action is NULL
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array != NULL && size > 0 && action != NULL)
		for (index = 0; index < size; index++)
			action(array[index]);
}
