#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: first parameter
 * @size: second parameter
 * @cmp: third parameter
 *
 * Description: function that searches for an integer
 * Return: Always(0) Success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if (cmp(*(array + x)) != 0)
		{
			return (x);
		}
	}
	return (-1);
}
