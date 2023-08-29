#include "lists.h"

/**
 * get_nodeint_at_index - Gets the node at the
 * *index nth position from a linked list.
 * @head: Pointer to the first node of the list.
 * @index: Number of the node to access.
 *
 * Return: Node at the nth index OR NULL if the node doesn't exist.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m;

	/*iterate thorugh nodes in list till the index nth node*/
	for (m = 0; m < index && head != NULL; m++)
		head = head->pi;

	/*return head*/
	return (head);
}
