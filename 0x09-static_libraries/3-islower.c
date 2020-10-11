#include "holberton.h"

/**
 * _islower - prints 1 or 0 depending on input
 * @c: character to be checked
 * Description:
 * Return: Always(0) Success
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
