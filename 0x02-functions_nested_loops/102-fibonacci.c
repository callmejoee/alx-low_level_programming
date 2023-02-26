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
	int i;
       	long int first, second, third;

	first = 1;
	second = 2;
	printf("1, 2, ");
	for (i = 0; i < 48; i++)
	{
		third = first + second;
		printf("%ld, ", third);
		first = second;
		second = third;
	}
	putchar('\n');
	return (0);
}
