#include <stdio.h>

/**
 * main - Entry point
 *
 * Desctiption: 'program to print various sizes'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Declarations */
	int integer, charachter, long_int, long_long, float_num;

	/* Calculations */
	integer = sizeof(int);
	charachter = sizeof(char);
	long_int = sizeof(long int);
	long_long = sizeof(long long int);
	float_num = sizeof(float);

	/* Printing the sizes */
	printf("Size of a char: %d byte(s)\n", charachter);
	printf("Size of a int: %d byte(s)\n", integer);
	printf("Size of a long int: %d byte(s)\n", long_int);
	printf("Size of a long long int: %d byte(s)\n", long_long);
	printf("Size of a float: %d byte(s)\n", float_num);

	/* Return and end */
	return (0);
}
