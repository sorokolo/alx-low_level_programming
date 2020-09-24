#include <stdio.h>
/**
 * main - outputs Largest prime number 
 *
 * Description:
 * Return: Always return 0 
 */
void main(void)
{
	long long int n, i;

	n = 612852475143;

	for (i = 3; i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%lld", i);
}
