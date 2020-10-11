#include "holberton.h"
#include <stdio.h>
/**
 * _memset - fills the first n bytes of the memory area pointed to by
 * s with the constant byte b
 * @s: memory address for the string value
 * @b: the value to replace the chars
 * @n: the number of chars to replace
 *
 * Description: fills memory with a constant byte.
 * Return: Always(0) Success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *source = (char *)s;

	for (i = 0; i < n; i++)
	{
		source[i] = b;
	}

	return (source);
}
