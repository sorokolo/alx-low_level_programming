#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: first parameter
 * @accept: second parameter
 *
 * Description: Returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 * Return: Always(0) Success
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
