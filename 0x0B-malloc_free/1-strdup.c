#include "main.h"

/**
 * strdup - string duplicate
 *
 * @str: string to be duplicated
 *
 * Return: pointer of type cfhar
 *
 */

char *_strdup(char *str)
{
	int len, i = 0;
	char *ptr = NULL;

	len = strlen(str);
	if (str == NULL)
		return (NULL);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	while (i <= len)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
