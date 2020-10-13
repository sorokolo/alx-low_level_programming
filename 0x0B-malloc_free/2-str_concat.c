#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first parameter
 * @s2: second parameter
 *
 * Description: uses malloc
 * Return: Always(0) Success
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
	;

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
	;

	str = malloc(s1_len + s2_len + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	while (i < s1_len)
	{
		str[i] = s1[i];
		i++;
	}

	j = 0;

	while (i < (s1_len + s2_len))
	{
		str[i] = s2[j];
		i++;
		j++;
	}

	str[i] = '\0';
	return (str);
}
