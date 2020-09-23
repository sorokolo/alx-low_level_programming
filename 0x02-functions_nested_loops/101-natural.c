#include <stdio.h>

/**
* main - prints the sum of all the multiples of 3 or 5 below 1024
* Return: 0
*/

int main(void)
{
	int i;
	int sum_of_multiple = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum_of_multiple += i;
		}
		else if (i % 5 == 0)
		{
			sum_of_multiple += i;
		}
	}
	printf("%d\n", sum_of_multiple);
	return (0);
}
