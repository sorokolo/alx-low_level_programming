#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Variable where memory will be allocate
 *
 * Description: function that allocates memory using malloc
 * Return: Always(0) Success
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
