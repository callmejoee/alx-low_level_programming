#include <stdio.h>

/**
 * main - Entry point
 *
 *
 *
 *
 * Return: void
 */
int main(void)
{
	long int sum;
	long int first, second, third;

	first = 1;
	second = 2;
	sum = 2;
	while (third < 4000000)
	{
		third = first + second;
		first = second;
		second = third;
		if (third % 2 == 0)
			sum += third;
	}
	printf("%ld", sum);
	putchar('\n');
	return (0);
}
