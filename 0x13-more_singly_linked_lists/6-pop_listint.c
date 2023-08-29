#include "lists.h"

/**
 * pop_listint - Deletes The Head of the Node.
 * @head: Pointer to the Old Node in the List.
 *
 * Return: The Head Node's Data (n).
*/

int pop_listint(listint_t **head)
{
	int old_node;
	listint_t *rues, *next;

	/*if list is empty return 0*/
	if (*head == NULL)
		return (0);

	/*set head addr to rues*/
	rues = *head;
	/*get addr of next node*/
	next = rues->next;
	/*get element of old node*/
	old_node = rues->n;

	/*free old node*/
	free(rues);

	/*set head to new node*/
	*head = next;

	/*return element of old node*/
	return (old_node);
}
