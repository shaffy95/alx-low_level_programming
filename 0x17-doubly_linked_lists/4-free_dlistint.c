#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: A pointer to the head of the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *m = head;
	dlistint_t *next;

	while (m != NULL)
	{
		next = m->next;
		free(m);
		m = next;
	}
}
