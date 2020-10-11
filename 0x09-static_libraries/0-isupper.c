#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _isupper - prints 1 or 0 depending on input
 * @c: character to be checked
 * Description:
 * Return: 1 if is upper and 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
