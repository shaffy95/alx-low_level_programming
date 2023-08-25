#include "lists.h"

/**
 * add_node_end - Adds a node at the end of the linked list.
 *
 * @head: Pointer to the first node of the list.
 * @str: String to add.
 *
 * Return: NULL if memory allocation fails, otherwise the starting address of the list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tip_node, *clon;
	size_t str_len = 0;

	/* Set string length to 0 if it's NULL. */
	if (str == NULL)
		str_len = 0;

	/* Count the length of the string. */
	while (str[str_len] != '\0')
		str_len++;

	tip_node = malloc(sizeof(list_t));
	if (tip_node == NULL)
		return (NULL);

	tip_node->str = strdup(str);
	tip_node->len = str_len;
	tip_node->next = NULL;

	/* Copy the starting node pointer to clon. */
	clon = *head;

	/* If clon is NULL, place our tip_node at the beginning of the list. */
	/* Otherwise, if it's not NULL, place our tip_node to clon->next, */
	/* adding our tip_node at the end of the list. */
	if (clon == NULL)
		*head = tip_node;
	else
	{
		/**
		 * Iterate the next pointer if it's not NULL.
		 * Our temp address points to the next address or the next node.
		 */
		while (clon->next != NULL)
			clon = clon->next;
		clon->next = tip_node;
	}

	return (*head);
}
