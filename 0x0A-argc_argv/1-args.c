#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of arguments
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: prints number of arguments
 * Return: Always(0) Success
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		argv[x] = argv[x];
	}
	printf("%d\n", (x - 1));
	return (0);
}
