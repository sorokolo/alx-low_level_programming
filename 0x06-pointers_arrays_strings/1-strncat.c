#include "holberton.h"
/**
 * _strncat - concatenates two strings.
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Description:
 * Return: always returns 0 on success
 */
char *_strncat(char *dest, char *src, int n)
{
    char *appended = dest;

    while (*dest != '\0')
    {
        dest++;
    }

    while ((*src != '\0') && n--)
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
    return (appended);
}
