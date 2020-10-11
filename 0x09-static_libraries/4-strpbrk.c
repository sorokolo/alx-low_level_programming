#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: First parameter and string to be searched
 * @accept: First parameter and bytes to be accepted
 * Return: Pointer to be the byte that matches accept or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
			if (*s == accept[i])
				return (s);
		s++;
	}
	return (NULL);
}
