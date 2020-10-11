#include "holberton.h"
#include <stdio.h>
/**
 * _strstr -  locates a substring
 * @haystack: first parameter
 * @needle: second parameter
 *
 * Description:  locates a substring
 * Return: Always(0) Success
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *first_string = haystack;
		char *second_string = needle;

		while (*haystack && *second_string && *haystack ==
		       *second_string)
		{
			haystack++;
			second_string++;
		}

		if (!*second_string)
			return (first_string);

		haystack = first_string + 1;
	}
	return (NULL);
}
