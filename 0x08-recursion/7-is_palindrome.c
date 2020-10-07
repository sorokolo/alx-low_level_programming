#include "holberton.h"

/**
 * string_length - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int string_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + string_length(++s));
	}
}

/**
 * checking_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @length: The length of s.
 * @i: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int checking_palindrome(char *s, int length, int i)
{
	if (s[i] == s[length / 2])
		return (1);

	if (s[i] == s[length - i - 1])
		return (checking_palindrome(s, length, i + 1));
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int length = string_length(s);

	if (!(*s))
		return (1);

	return (checking_palindrome(s, length, i));
}
