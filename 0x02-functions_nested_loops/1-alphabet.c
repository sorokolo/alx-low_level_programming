#include "holberton.h"
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i = 0;
	char alphabet;

	while (i < 10)
	{
		alphabet = 'a';
		while (alphabet <= z)
		{
			_putchar(alphabet);
			alphabet++;
		}
		i++;
		_putchar('\n');
	}
}
