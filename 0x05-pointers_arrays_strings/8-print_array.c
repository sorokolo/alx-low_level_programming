#include "holberton.h"
#include "stdio.h"

/**
 * print_array - Print array of n elements
 * @a: Array to be read
 * @n: Number of elements
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; n > i; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
	}
	printf("\n");
}
