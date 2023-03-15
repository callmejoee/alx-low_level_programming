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

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	while (i <= len)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
