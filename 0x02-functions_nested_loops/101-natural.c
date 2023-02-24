#include <stdio.h>

/**
 * main - entry point
 *
 * Description: sum
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, sum, three, five;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3)
			three = i;
		else if (i % 5)
			five = i;
		sum += five;
		sum += three;

	}
	printf("%d", sum);
	return (0);
}
