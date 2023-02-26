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
	int i;
	unsigned long int first, second, third;

	first = 1;
	second = 2;
	printf("1, 2, ");
	for (i = 0; i < 96; i++)
	{
		third = first + second;
		if (i != 95)
			printf("%ld, ", third);
		else
			printf("%ld", third);
		first = second;
		second = third;
	}
	putchar('\n');
	return (0);
}
