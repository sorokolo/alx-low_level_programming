#include <stdio.h>
/**
 *main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 *Return: 0
 */
int main(void)
{
	int i;
	int term1 = 1;
	int term2 = 2;
	int nextTerm;

	for (i = 1; i <= 50; ++i)
	{
		printf("%d, ", term1);
		nextTerm = term1 + term2;
		term1 = term2;
		term2 = nextTerm;
	}
	printf("\n");
	return (0);
}
