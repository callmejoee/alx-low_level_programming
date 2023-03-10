#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 if no number is passed else if num is not all digit 1
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
		printf("0\n");
	for (i = 0; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
