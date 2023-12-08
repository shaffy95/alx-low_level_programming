#include "lists.h"

/**
* delete_dnodeint_at_index - deletes a node at index.
* @head: head node of the list.
* @index: index of the node.
* Return: 1 on success.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
{
	dlistint_t *m;

	dlistint_t *k;

	unsigned int s;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		dlistint_t *tmp = *head;

		*head = (*(*head)).next;

		if (*head != NULL)
		{
			(*(*head)).prev = NULL;
		}

		free(tmp);
		return (1);
	}

	m = *head;

	for (s = 0; s < index - 1 && m != NULL; s++)
	{
		m = (*m).next;
	}

	if (m == NULL || (*m).next == NULL)
	{
		return (-1);
	}

	k = (*m).next;

	(*m).next = (*k).next;

	if ((*k).next != NULL)
	{
		(*k).next->prev = m;
	}

	free(k);

	return (1);
}
