#include "holberton.h"
/**
 * main - print Holberton
 * holberton[]: array of char that contain holberton
 *
 * Return: 0 at the end of the program
 */
int main(void)
{
	char holberton[9] = "Holberton";
	unsigned long int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(holberton[i]);
	}
	_putchar('\n');
	return (0);
}
