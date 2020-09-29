#include "holberton.h"


/**
 * print_rev - Print provided string in reverse
 * @s: Pointer to string to be reversed
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
