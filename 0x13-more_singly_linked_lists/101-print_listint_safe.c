#include "lists.h"

/**
 * free_listp - Frees a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: No return value.
*/

void free_listp(listp_t **head)
{
	listp_t *sew;
	listp_t *new;

	if (head != NULL)
	{
		new = *head;
		while ((sew = new) != NULL)
		{
			new = new->next;
			free(sew);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - Printing a Linked List.
 * @head: The Head of a List.
 *
 * Return: The Numbers of Nodes in the List.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *chatGpt, *chat, *hard;

	chatGpt = NULL;
	while (head != NULL)
	{
		chat = malloc(sizeof(listp_t));

		if (chat == NULL)
			exit(98);

		chat->p = (void *)head;
		chat->next = chatGpt;
		chatGpt = chat;

		hard = chatGpt;

		while (hard->next != NULL)
		{
			hard = hard->next;
			if (head == hard->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&chatGpt);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&chatGpt);
	return (nnodes);
}
