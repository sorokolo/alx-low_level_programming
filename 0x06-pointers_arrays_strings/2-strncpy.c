#include "holberton.h"
/**
 *_strncpy - copies a string.
 *@destination:destination string.
 *@source:source string.
 *@n:size to copy from src.
 *Return: pointer to dest.
 */

char *_strncpy(char *destination, char *source, int n)
{
	int i;

	for (i = 0; i < n && source[i] != '\0'; i++)
		destination[i] = source[i];
	for ( ; i < n; i++)
		destination[i] = '\0';

	return (destination);
}
