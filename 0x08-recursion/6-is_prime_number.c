#include "holberton.h"

/**
 * isPrime - helper function to find prime number
 * @i: first number
 * @j: second number
 * Return: 1 if true, 0 if false
 */
int isPrime(int i, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (i % j == 0)
	{
		return (0);
	}
	else
	{
		return (isPrime(i, j - 1));
	}
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: prime number
 * Return: 1 if is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}
	else
	{
		return (isPrime(n, n - 1));
	}
}
