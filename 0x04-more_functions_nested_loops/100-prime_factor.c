#include <stdio.h>

/**
 * prime_numbers - print prime numbers
 *
 * @num: number
 *
 * Return: Always 0
 */

void prime_numbers(int num)
{
	int count;

	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			printf("%d,", count);
			num /= count;
		}
	}
	printf("\n");
}
int main(void)
{
	long int num;

	num = 612852475143;
	prime_numbers(num);

	return (0);
}
