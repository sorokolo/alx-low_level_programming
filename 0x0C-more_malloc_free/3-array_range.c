#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * array_range - Creates an array of integers
 * @min: first parameter
 * @max: second parameter
 *
 * Description: function that creates an array of integers
 * Return: Always(0) Success
 */
int *array_range(int min, int max)
{
	int *array;
	int i, array_size;

	if (min > max)
		return (NULL);

	array_size = (max - min) + 1;

	array = malloc(sizeof(int) * array_size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < array_size; i++)
	{
		array[i] = min;
		min = min + 1;
	}

	return (array);
}
