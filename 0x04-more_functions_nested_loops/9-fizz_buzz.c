#include <stdio.h>
/**
 * main - prints nultplies of 3 or 5
 *
 * Description:
 * Return: Always returns 0
 */
int main(void)
{
	int start, end;

	end = 99;

	for (start = 1; start <= end; start++)
	{
		if (start % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (start % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (start % 5 == 0)
		{
			printf("Buzz ");
		} else
		{
			printf("%d ", start);
		}
	}

	printf("Buzz\n");

	return (0);
}
