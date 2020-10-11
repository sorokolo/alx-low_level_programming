#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints product of two numbers
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: prints product of two numbers
 * Return: Always(0) Success
 */
int main(int argc, char *argv[])
{
	int x;
	int first;
	int second;
	int product;
	char error[10] = "Error";

	if (argc != 3)
	{
		printf("%s\n", error);
		return (1);
	}

	for (x = 0; x < argc; x++)
	{
		first = atoi(*(argv + 1));
		second = atoi(argv[2]);
	}

	product = first * second;

	printf("%d\n", product);

	return (0);
}
