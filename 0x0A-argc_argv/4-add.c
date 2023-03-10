#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
	for (i = 1; i < argc; i++)
	{
		while(*argv[i] != '\0')
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error");
				return (1);
			}
			argv[i]++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
