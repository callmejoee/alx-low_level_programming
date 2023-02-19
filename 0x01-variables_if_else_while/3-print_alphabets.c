#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: App to print lowercase alphabet letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char start,start_c;
	int end, i;

	start_c = 'A';
	start = 'a';
	end = 'z' - 'a';
	end_c = 'Z' - 'A';
	for (i = 0; i <= end; i++)
	{
		putchar(start);
		start++;
		putchar(start_c);
		start_c++;
	}

	putchar('\n');

	return (0);
}
