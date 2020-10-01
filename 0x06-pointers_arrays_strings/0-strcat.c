#include "holberton.h"
/**
 * _strcat - appends strings together
 * @destination: first parameter
 * @source: second parameter
 *
 * Return: Always(0) Success
 */
char *_strcat(char *destination, char *source)
{
	char *add = destination;

	while (*destination != '\0')
	{
		destination++;
	}

	while (*source != '\0')
	{
		*destination = *source;
		destination++;
		source++;
	}

	*destination = '\0';
	return (add);
}
