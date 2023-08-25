#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of the linked list.
 *
 * @head: Pointer to the pointer of the first node of the list.
 * @str: String to add to the new node.
 *
 * Return: NULL if it fails, otherwise the starting address of the list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t str_len = 0;

	/* Set the string length to 0 if it's NULL */
	if (str == NULL)
		str_len = 0;

	/* Count the length of the string */
	while (str[str_len] != '\0')
		str_len++;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Copy the string and assign its length to the new node */
	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = NULL;

	/* Copy our starting node pointer to temp */
	temp = *head;

	/* If temp is NULL, place our new_node at the beginning of the list */
	/* Otherwise, if it's not NULL, we place our new_node at the end of the list */
	if (temp == NULL)
		*head = new_node;
	else
	{
		/**
		 * We iterate through the linked list until temp->next is NULL,
		 * which means we've reached the last node.
		 */
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
