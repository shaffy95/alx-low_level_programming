#include "lists.h"

/**
 * find_listint_loop - Detects a loop in a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Address of the node where the loop starts.
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *m;
	listint_t *l;

	m = head;
	l = head;
	while (head && m && m->next)
	{
		head = head->next;
		m = m->next->next;

		if (head == m)
		{
			head = l;
			l =  m;
			while (1)
			{

				m = l;
				while (m->next != head && m->next != l)
				{
					m = m->next;
				}
				if (m->next == head)
					break;

				head = head->next;
			}
			return (m->next);
		}
	}
	return (NULL);
}
