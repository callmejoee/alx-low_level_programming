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
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum += i;
			continue;
		}
		else if (i % 5 == 0)
			sum += i;

	}
	printf("%d\n", sum);
	return (0);
}
