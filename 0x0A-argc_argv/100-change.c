#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of cents
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: prints number of cents
 * Return: Always(0) Success
 */
int main(int argc, char *argv[])
{
	int cents = 0;
	int number;
	char error[10] = "Error";


	if (argc != 2)
	{
		printf("%s\n", error);
		return (1);
	}

	number = atoi(*(argv + 1));

	if (number >= 25)
	{
		cents += number / 25;
		number = number % 25;
	}
	if (number >= 10)
	{
		cents += number / 10;
		number = number % 10;
	}
	if (number >= 5)
	{
		cents += number / 5;
		number = number % 5;
	}
	if (number >= 2)
	{
		cents += number / 2;
		number = number % 2;
	}
	if (number >= 1)
	{
		cents += number / 1;
		number = number % 1;
	}
	printf("%d\n", cents);
	return (0);
}
