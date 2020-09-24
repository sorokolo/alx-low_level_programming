#include "holberton.h"
#include <stdio.h>

/**
 * print_diagonal - Prints diagonals
 * @n : number of characters to be printed
 * Return: Void.
 */
void print_diagonal(int n)
{
	int i;
	int add;

	for (i = 0; i < n; i++)
	{
		for (add = 0; add < i; add++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
