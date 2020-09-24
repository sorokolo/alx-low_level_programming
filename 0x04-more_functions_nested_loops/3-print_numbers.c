#include "holberton.h"
/**
 * print_numbers - Count down number
 * Description: None
 * Return: Always returns 0 on success
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
