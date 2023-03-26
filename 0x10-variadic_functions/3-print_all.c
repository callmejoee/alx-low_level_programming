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
	int i = 0, flag;
	char *temp;
	va_list ptr;

	va_start(ptr, format);

	while (format[i] != '\0' && format != NULL)
	{
		flag = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%i", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				temp = va_arg(ptr, char *);
				if (temp == NULL)
					temp = "(nil)";
				printf("%s", temp);
				break;
			default:
				flag = 1;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ptr);
}
