#include "holberton.h"
/**
 * _pow_recursion - returns the factorial of a given number.
 * @x: first number
 * @y: second number
 *
 * Return: return the power
 */
int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
		{
			return (1);
		}
		else
		{
			return (x * _pow_recursion(x, y - 1));
		}
	}
	else
	{
		return (-1);
	}
}
