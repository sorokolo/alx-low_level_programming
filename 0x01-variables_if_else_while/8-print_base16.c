#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for writing entire base16 numeric set
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;

	for (character = '0' ; character <= '9' ; character++)
	{
		putchar(character);
	}
	for (character = 'a' ; character <= 'f' ; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
