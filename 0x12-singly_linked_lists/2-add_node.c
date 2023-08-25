#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of the linked list.
 *
 * @head: Pointer to the pointer of the first node of the list.
 * @str: String to add to the new node in the list.
 *
 * Return: NULL if it fails, otherwise the starting address of the list.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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

	/**
	 * Initialize the next address of the new_node.
	 * If head is NULL, set new_node->next to NULL.
	 * Otherwise, link new_node->next to the current head,
	 * effectively adding new_node at the beginning of the list.
	 */
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	/* Copy the string and assign its length to the new node */
	new_node->str = strdup(str);
	new_node->len = str_len;

	/* Update the head pointer to the new_node */
	*head = new_node;

	return (*head);
}
