#include "holberton.h"

/**
 * print_alphabet_x10 - print the alphabet in lowercase
 * alphabet: alphabet character
 * i: counter
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int i = 0;

	while (i < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		i++;
		_putchar('\n');
	}
}
