#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: header pointer
 * Description: function that returns the number of elements in a linked
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
