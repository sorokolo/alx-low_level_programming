#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: first parameter
 * @s2: second parameter
 *
 * Description: 
 * Return: Always returns 0 on success
 */
int _strcmp(char *s1, char *s2)
{
    while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
    {
        s1++;
        s2++;
    }

    if (*s1 == *s2)
    {
        return (0);
    }

    else
    {
        return (*s1 - *s2);
    }
}
