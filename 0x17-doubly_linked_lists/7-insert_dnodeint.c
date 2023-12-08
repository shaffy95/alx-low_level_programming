#include "lists.h"

/**
 * insert_dnodeint_at_index - adding a new node at a given position.
 * @h: the pointer to a pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be added. Index starts at 0.
 * @n: The data (n) for the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *m = *h;
	unsigned int element;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;

	if (idx == 0)
	{	newNode->prev = NULL;
		newNode->next = *h;
		if (*h != NULL)
		{	(*h)->prev = newNode;
		}
		*h = newNode;
		return (newNode);
	}
	for (element = 0; element < idx - 1 && m != NULL; element++)
	{	m = m->next;
	}
	if (m == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->prev = m;
	newNode->next = m->next;

	if (m->next != NULL)
	{
		m->next->prev = newNode;
	}
	m->next = newNode;

	return (newNode);
}
