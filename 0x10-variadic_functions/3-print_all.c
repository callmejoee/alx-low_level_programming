#include "variadic_functions.h"

/**
 * print_all - function to print whatever is thrown at it
 *
 * @format: a const pointer to char varaibke that is also const
 *
 *
 * Return: void
 *
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ptr;
	char *temp;

	va_start(ptr, format);

	while (format[i] != '\0' && format[i] != NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				temp = va_arg(ptr, char *);
				if (temp == NULL)
					printf("(nil");
				else
					printf("%s", temp);
				break;
		}
		if (format[i + 1] != '\0' &&
			(format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's'))

			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ptr);
}
