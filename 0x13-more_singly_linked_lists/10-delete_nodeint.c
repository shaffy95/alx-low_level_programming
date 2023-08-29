#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a specific
 * index of a linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the list where the node is to be deleted.
 *
 * Return: 1 if deletion succeeded, -1 if it failed.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m;
	listint_t *set;
	listint_t *next;

	set = *head;

	if (index != 0)
	{
		for (m = 0; m < index - 1 && set != NULL; m++)
		{
			set = set->next;
		}
	}

	if (set == NULL || (set->next == NULL && index != 0))
	{
		return (-1);
	}

	next = set->next;

	if (index != 0)
	{
		set->next = next->next;
		free(next);
	}
	else
	{
		free(set);
		*head = next;
	}

	return (1);
}
