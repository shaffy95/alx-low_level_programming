#include <stdlib.h>

/**
 * _realloc - reallocate a memory block using malloc and free
 *
 * @ptr: pointer to previous memory
 * @old_size: old memory array size
 * @new_size: new memory array size
 *
 * Return: pointer to new memory
 *         NULL if it fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *m_ptr, *n_ptr;
	unsigned int k;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		m_ptr = malloc(new_size);
		if (m_ptr == NULL)
			return (NULL);
		free(ptr);
		return (m_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	m_ptr = malloc(new_size);
	if (m_ptr == NULL)
		return (NULL);

	n_ptr = ptr;

	for (k = 0; k < old_size; k++)
		m_ptr[k] = n_ptr[k];

	free(ptr);
	return (m_ptr);
}
