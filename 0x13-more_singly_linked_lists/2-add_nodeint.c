#include "lists.h"

/**
 * add_nodeint - Adds a lit node with an integer at the beginning of a list.
 * @head: Pointer to the first node.
 * @n: Integer value to add in the lit node.
 *
 * Return: Address of the new element or NULL if it fails.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *lit_node;

	lit_node = malloc(sizeof(listint_t));
	if (lit_node == NULL)
		return (NULL);

	/*link first node in head with the lit_node*/
	if (*head == NULL)
		lit_node->next = NULL;
	else
		lit_node->next = *head;

	lit_node->n = n;
	/*add lit node at the beginning of the list*/
	*head = lit_node;

	return (*head);
}
