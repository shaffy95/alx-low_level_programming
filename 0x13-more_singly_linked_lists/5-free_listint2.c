#include "lists.h"

/**
 * free_listint2 - Frees the list and sets head to NULL.
 * @head: Pointer to the first node.
 *
 * Return: Nothing.
*/

void free_listint2(listint_t **head)
{
	listint_t *mse, *rues;

	if (head != NULL)
	{
		/*set head addr to mse*/
		mse = *head;

		/*iterate through the whole list*/
		/*while setting the mse node to rues*/
		while ((rues = mse) != NULL)
		{
			/*set next node to msent*/
			mse = mse->next;
			/*free rues, that is the mse node*/
			free(rues);
		}

		*head = NULL;
	}
}
