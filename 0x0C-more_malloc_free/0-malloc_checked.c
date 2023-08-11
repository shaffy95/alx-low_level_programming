#include "main.h"
#include <stdlib.h>

/**
 * malloc - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Returns: A pointer to the allocated memory
 * if maloc fails, the malloc_checked function causes
 * normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return ptr;
}
