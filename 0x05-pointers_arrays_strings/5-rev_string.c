#include "holberton.h"
/**
 * rev_string - Reverse String
 * @s: Pointer to string to be reversed
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i = 0;
	int a = 0;
	int temp;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

	while (i > a)
	{
		temp = s[i];
		s[i--] = s[a];
		s[a++] = temp;
	}
}
