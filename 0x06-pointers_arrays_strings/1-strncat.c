#include "holberton.h"
/**
 * _strncat - concatenates two strings.
 * @destination: first parameter
 * @source: second parameter
 * @n: third parameter
 *
 * Return: Always(0) Success
 */
char *_strncat(char *destination, char *source, int n)
{
	char *add = destination;

	while (*destination != '\0')
	{
		destination++;
	}

	while ((*source != '\0') && n--)
	{
		*destination = *source;
		destination++;
		source++;
	}

	*destination = '\0';
	return (add);
}
