#include "holberton.h"
#include <stdio.h>
/**
 * print_line - print lines n times
 * @n : With of the square
 * Return: void
 */
void print_square(int n)
{
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            _putchar('#');
        }
        _putchar('\n');

    }

}
