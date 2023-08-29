#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the head of a list.
 * @idx: Index of the list where the new node is added.
 * @n: Integer element to insert.
 *
 * Return: The address of the new node, or NULL if it failed.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *set;
	listint_t *x;

	x = *head;

	if (idx != 0)
	{
		for (m = 0; m < idx - 1 && x != NULL; m++)
		{
			x = x->next;
		}
	}

	if (x == NULL && idx != 0)
		return (NULL);

	set = malloc(sizeof(listint_t));
	if (set == NULL)
		return (NULL);

	set->n = n;

	if (idx == 0)
	{
		set->next = *head;
		*head = set;
	}
	else
	{
		set->next = x->next;
		x->next = set;
	}

	return (set);
}
