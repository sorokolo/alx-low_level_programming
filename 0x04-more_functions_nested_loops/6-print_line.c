#include "holberton.h"
#include <stdio.h>

/**
 * print_line - prints _ n times.
 * @n : number of times
 * Return: Void.
 */
void print_line(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        _putchar('_');
    }
    _putchar('\n');
}
