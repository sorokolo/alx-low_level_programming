#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array and initializes it with a specific char
 * @size: first parameter
 * @c: second parameter
 *
 * Description: uses malloc
 * Return: Always(0) Success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *ptr;

	ptr = (char *) malloc(size);

	if (size == 0)
		return (NULL);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			ptr[x] = c;
		}
		return (ptr);
	}
	return (0);
}
