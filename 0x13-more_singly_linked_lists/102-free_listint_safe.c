#include "lists.h"

/**
 * free_listp2 - Frees a linked list and sets head to NULL.
 * @head: Pointer to the head of a list.
 *
 * Return: No return value.
*/

void free_listp2(listp_t **head)
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
 * free_listint_safe - Safely frees a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: Size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *chatGpt, *chat, *hard;
	listint_t *new;

	chatGpt = NULL;
	while (*h != NULL)
	{
		chat = malloc(sizeof(listp_t));

		if (chat == NULL)
			exit(98);

		chat->p = (void *)*h;
		chat->next = chatGpt;
		chatGpt = chat;

		hard = chatGpt;

		while (hard->next != NULL)
		{
			hard = hard->next;
			if (*h == hard->p)
			{
				*h = NULL;
				free_listp2(&chatGpt);
				return (nnodes);
			}
		}

		new = *h;
		*h = (*h)->next;
		free(new);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&chatGpt);
	return (nnodes);
}
