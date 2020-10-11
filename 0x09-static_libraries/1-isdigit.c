
#include "holberton.h"
/**
 * _isdigit - prints 1 or 0 depending on input
 * @c: character to be checked
 * Description:
 * Return: 1 if is upper and 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
