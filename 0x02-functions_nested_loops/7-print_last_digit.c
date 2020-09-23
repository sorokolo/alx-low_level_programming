#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: Number to be checked
 * last_digit: the number representing the last digit
 * Description:
 * Return: return the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = (n % 10) * -1;
	}
	else
	{
		last_digit = n % 10;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
