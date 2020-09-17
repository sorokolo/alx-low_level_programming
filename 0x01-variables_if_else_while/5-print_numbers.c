#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for writing entire base10 single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int integer;

	for (integer = 0 ; integer < 10 ; integer++)
	{
		printf("%d", integer);
	}
	putchar('\n');
	return (0);
}
