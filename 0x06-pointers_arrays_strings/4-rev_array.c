#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a: first parameter
 * @n: second parameter
 *
 * Description: 
 * Return: Always returns 0 on success
 */
void reverse_array(int *a, int n)
{
    int hold, first, last;

    first = 0;
    last = n - 1;

    for (first = 0; first < last; first++, last--)
    {
        hold = *(a + first);
        *(a + first) = *(a + last);
        *(a + last) = hold;
    }
}
