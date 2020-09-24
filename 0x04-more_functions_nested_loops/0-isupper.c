#include "holberton.h"
/**
 * _isupper - check for Upper
 * @c:Character
 *
 * Description: NA
 * Return: Return 0 on success
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
