#include "stdlib.h"
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 * @head: head of linked list
 * Description: function that returns the sum of all the data (n) of a
 * listint_t linked list.
 * Return: the sum of all data (n) of linked list
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp;

	if (head == NULL)
		return (0);
	sum = 0;
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
