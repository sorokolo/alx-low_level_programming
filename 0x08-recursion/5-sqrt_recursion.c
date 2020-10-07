#include "holberton.h"

/**
 * isSqrt - Helper function to check the sqrt function
 * @i: first number
 * @j: second number
 * Return: square root of number
 */

int isSqrt(int i, int j)
{
	if (j * j > i)
	{
		return (-1);
	}
	if (j * j == i)
	{
		return (j);
	}
	else
	{
		return (isSqrt(i, j + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: first number
 * Return: square root of number, -1 if false
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (isSqrt(n, 1));
	}
}
