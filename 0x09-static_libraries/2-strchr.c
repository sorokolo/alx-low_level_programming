#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: first parameter
 * @c: second parameter
 *
 * Description: Returns a pointer to the first
 * occurrence of the character c in the string s,
 * or NULL if the character is not found
 * Return: Always(0) Success
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (!c)
	{
		return (s);
	}
	return (NULL);
}
