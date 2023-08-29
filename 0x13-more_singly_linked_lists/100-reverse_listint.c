#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Pointer to the new head of the reversed list.
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *m;
	listint_t *q;

	m = NULL;
	q = NULL;

	while (*head != NULL)
	{
		q = (*head)->next;
		(*head)->next = m;
		m = *head;
		*head = q;
	}

	*head = m;
	return (*head);
}
