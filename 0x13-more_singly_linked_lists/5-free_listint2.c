#include <malloc.h>
#include "lists.h"

/**
 *free_listint2 - frees listint_t.
 *@head: Pointer to listint_t.
 *
 *Description: function that frees a listint_t list.
 *Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
