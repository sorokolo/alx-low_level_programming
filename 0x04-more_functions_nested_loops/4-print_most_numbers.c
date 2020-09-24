#include "holberton.h"
/**
 * print_most_numbers - prints numbers from 0-9
 * except 2 and 4
 * Return: always returns 0 on success
 */
void print_most_numbers(void)
{
	int i = 0;

	do {
		if (i == 2 || i == 4)
		{
			i = i + 1;
			continue;
		}
		_putchar(i + '0');
		i++;
	} while (i < 10);
	_putchar('\n');
}
