#include "holberton.h"

/**
* print_alphabet - print the alphabet in lowercase
* alphabet: alphabet character
*/
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
