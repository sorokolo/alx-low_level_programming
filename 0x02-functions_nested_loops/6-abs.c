#include "holberton.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @n: character to be checked
 * Description:
 * Return: Always(0) Success
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (n);
	}
	else
	{
		return (n * (+1));
	}
}
