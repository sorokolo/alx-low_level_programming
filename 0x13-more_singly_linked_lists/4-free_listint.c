#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: input header pointer
 * description: function that frees a listint_t list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
