#include "holberton.h"
/**
 * _strcat - concatenates two strings.
 * @dest: Fisrt string
 * @src: second string
 *
 * Description:
 * Return: Always returns 0 on success
 */
char *_strcat(char *dest, char *src)
{
    char *appended = dest;

    while (*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
    return (appended);
}
