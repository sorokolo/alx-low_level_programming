#include "holberton.h"
#include "stdio.h"

/**
 * puts2 - Print every other character in a string
 * @str: String whose value is to be printed
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
