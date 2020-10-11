#include <stdio.h>

/**
 * main - prints file name
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: prints file name
 * Return: Always(0) Success
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
