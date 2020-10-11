#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments
 * @argc: first parameter
 * @argv: second parameter
 *
 * Description: prints all arguments
 * Return: Always(0) Success
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
