#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 *
 */

int main(int argc, char *argv[])
{
	int num1, num2, sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		sum = num1 * num2;
		printf("%d\n", sum);
	}
	return (0);
}
