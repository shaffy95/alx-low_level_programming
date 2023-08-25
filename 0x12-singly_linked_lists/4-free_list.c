#include "lists.h"

/**
 * free_list - free single list link
 *
 * @head: pointer to the first node of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temple;

	/**
	 * While temple head is not NULL
	 * Set The head as the next node and
	 * Free the temple node str then
	 * Free The temple node.
	 */
	while ((temple = head) != NULL)
	{
		head = head->next;
		free(temple->str);
		free(temple);
	}
}
