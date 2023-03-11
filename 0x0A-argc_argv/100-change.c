#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 *
 * Return: 0
 *
 */


int coins(int value)
{
	int count = 0;
	int  i;
	int arr[] = {25, 10, 5, 2, 1};
	if (value == 0)
		return (0);
	
	for (i = 0; i < 5; i++)
	{
		while (arr[i] <= value)
		{
			value = value - arr[i];
			count++;
		}
	}
	if (value == 1)
		count++;
	return (count);
}


int main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
		printf("0\n");
	else
	{
		printf("%d\n", coins(num));
	}

	return (0);
}
