#include "holberton.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Description: copies memory area.
 * Return: Always(0) Success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *src_char = (char *)src;
	char *dest_char = (char *)dest;

	for (i = 0; i < n; i++)
		dest_char[i] = src_char[i];

	return (dest_char);
}
