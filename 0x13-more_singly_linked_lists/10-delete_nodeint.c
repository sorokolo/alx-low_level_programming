#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of a
 * listint_t linked list.
 * @head: head of the linked list
 * @index: index to delete
 * Description: function that deletes the node at index index of a
 * listint_t linked list.
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *rmovenode;
	unsigned int i;

	i = 0;
	tmp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
	}
	else
	{
		while (i < index - 1)
		{
			tmp = tmp->next;
			if (tmp == NULL)
				return (-1);
			i++;
		}
		rmovenode = tmp;
		rmovenode = rmovenode->next;
		tmp->next = rmovenode->next;
		free(rmovenode);
	}
	return (1);
}
