#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to the first node of the list.
 *
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *mse;

	/*iterate through each node in list*/
	while ((mse = head) != NULL)
	{
		/*set head as the next node*/
		head = head->next;
		free(mse);
	}
}
