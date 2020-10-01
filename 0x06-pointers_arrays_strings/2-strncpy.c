#include "holberton.h"
/**
 * _strncpy - copies a string
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Description: 
 * Return: always returns 0 on success
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *copy = dest;
    int i = 0;

    while ((*src != '\0') && (i <= n))
    {
        *dest = *src;
        dest++;
        src++;
        i += 1;

    }

    for (; i < n; i++)
        *dest = '\0';

    return (copy);
}
