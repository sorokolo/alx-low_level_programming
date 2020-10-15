#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
#include <string.h>
/**
 * _calloc - Allocates memory for an array
 * @nmemb: first parameter
 * @size: second parameter
 *
 * Description: function that allocates memory for an array
 * Return: Always(0) Success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);

	if (memory == NULL)
		return (NULL);

	for (x = 0; x < (nmemb * size); x++)
	{
		*(memory + x) = 0;
	}
	return (memory);
}
