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
	char start;
	int end, i;

	start = 'a';
	end = 'z' - 'a';
	for (i = 0; i <= end; i++)
	{
		if (start == 'q' || start == 'e')
		{
			start++;
			continue;
		}
		putchar(start);
		start++;
	}

	putchar('\n');

	return (0);
}
