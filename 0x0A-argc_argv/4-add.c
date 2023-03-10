#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
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
	int i, j, sum = 0, len;

	char *pChar;

	if (argc <= 1)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		pChar = argv[i];
		len = strlen(pChar);
		for (j = 0; j < len; j++)
		{
			if (!isdigit(*(pChar + j)))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
