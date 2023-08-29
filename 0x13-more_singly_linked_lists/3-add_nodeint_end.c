#include "lists.h"

/**
 * add_nodeint_end - Adds a lit node with an integer at the end of the list.
 * @head: Pointer to the first node of the list.
 * @n: Integer value to add in the lit node.
 *
 * Return: Address of the new element or NULL if it fails.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lit_node, *mse;

	lit_node = malloc(sizeof(listint_t));
	if (lit_node == NULL)
		return (NULL);

	lit_node->n = n;
	lit_node->next = NULL;

	mse = *head;

	/*place lit_node first if head is NULL*/
	if (mse == NULL)
		*head = lit_node;
	else
	{
		/*if head is not null, and next is not NULL*/
		while (mse->next != NULL)
			mse = mse->next;	/*go to the last node*/

		/*place our lit node at the end*/
		mse->next = lit_node;
	}

	return (*head);
}
