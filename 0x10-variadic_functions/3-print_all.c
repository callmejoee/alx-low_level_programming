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
	int i;
	int flag;
	char *temp;
	va_list ptr;

	va_start(ptr, format);
	i = 0;
	while (format[i] != '\0' && format != NULL)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(ptr, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				flag = 0;
				break;
			case 's':
				temp = va_arg(ptr, char *);
				if (temp == NULL)
					temp = "(nil)";
				printf("%s", temp);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ptr);
}
