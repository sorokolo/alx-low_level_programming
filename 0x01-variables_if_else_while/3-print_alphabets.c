#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for writing entire lowercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char character;

	for (character = 'a' ; character <= 'z' ; character++)
	{
		putchar(character);
	}
	for (character = 'A' ; character <= 'Z' ; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
