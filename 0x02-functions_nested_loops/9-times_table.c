#include "holberton.h"
/**
 * times_table - checking for alphabetic character
 * i: number a
 * n: number b
 * result: Product of a and b
 * Description:
 */
void times_table(void)
{
	int i;
	int n;
	int result;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			result = i * n;
			if (n == 0)
			{
				_putchar(result + '0');
			}
			else if (result >= 10)
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			if (n != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
