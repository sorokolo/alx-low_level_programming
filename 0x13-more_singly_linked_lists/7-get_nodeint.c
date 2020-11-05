#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of linkedlist
 * @index: index to get
 * Description: function that returns the nth node of a listint_t linked list.
 * Return: the nth node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	tmp = head;
	while (i < index && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (i != index)
		return (NULL);
	return (tmp);
}
