#include "holberton.h"
/**
 * print_sign - printing the sign of a number.
 * @n: character to be checked
 * Description:
 * Return: Always(0) Success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
