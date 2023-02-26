#include <stdio.h>

/**
 * main - Entry point
 *
 *
 *
 * Description: Fibonacci Sequence
 *
 * Return: void
 */
int main(void)
{
	int i, first, second, third;

	first = 1;
	second = 2;
	printf("1, 2, ");
	for (i = 0; i < 50; i++)
	{
		third = first + second;
		printf("%d, ", third);
		first = second;
		second = third;
	}
	putchar('\n');
	return (0);
}
