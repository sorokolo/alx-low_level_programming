#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: first parameter
 *
 * Description: 
 * Return: always returns 0 on success
 */
char *cap_string(char *s)
{
    int x = 0;
    char *str = s;

    while (s[x] != '\0')
    {
        if ((s[x] == ' ') || (s[x] == '\t') || (s[x] == '\n')
            || (s[x] == ',') || (s[x] == ';') || (s[x] == '.')
            || (s[x] == '!') || (s[x] == '?') || (s[x] == '"')
            || (s[x] == '(') || (s[x] == ')') || (s[x] == '{')
            || (s[x] == '}'))
        {
            ++x;

            if ((s[x] >= 'a') && (s[x] <= 'z'))
            {
                s[x] = (s[x] - 32);
                continue;
            }
        }
        x++;
    }
    return (str);
}
