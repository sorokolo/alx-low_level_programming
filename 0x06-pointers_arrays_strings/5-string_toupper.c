#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: first parameter
 *
 * Description:
 * Return: always returns 0 on success
 */
char *string_toupper(char *s)
{
    int x = 0;

    while (s[x] != '\0')
    {
        if ((s[x] >= 'a') && (s[x] <= 'z'))
        {
            s[x] = (s[x] - 32);
        }
        x++;
    }
    return (s);
}
