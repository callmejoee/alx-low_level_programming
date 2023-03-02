/**
 * _strncpy - A function that copy string 
 *
 * @dest: pointer to destination 
 * @src: pointer to src
 * @n: number of  bytes 
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (i < n && src[j] != '\0')
	{
		dest[j] = src[j];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
