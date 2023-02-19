#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Descritpion: 'Program to know if number is negative'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Get last digit */
	last_digit = (n % 10);
	printf("Last digit of %d is %d", n, last_digit);

	/* Print the other part of the string */

	if (last_digit == 0)
		printf(" and is 0\n");
	else if (last_digit > 5)
		printf(" and is greater than 5\n");
	else if (last_digit < 6)
		printf(" and is less than 6 and not 0\n");

	return (0);
}
