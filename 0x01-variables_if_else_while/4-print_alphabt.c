#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for writing entire lowercase alphabet except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int character;

	for (character = 'a' ; character <= 'z' ; character++)
	{
		if (character != 'q' && character != 'e')
		{
			putchar(character);
		}
	}
	putchar('\n');
	return (0);
}
