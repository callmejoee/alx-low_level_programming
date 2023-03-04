
/**
 * cap_string - converts all input char to upper
 * @n: n strung
 * Return: pointer to hcar
 */
char *cap_string(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			if (i == 0)
				n[i] -= 32;
			else if (*(n + 1) == ',' || *(n + 1) == ';' || *(n + 1) == '.' ||
				 *(n + 1) == '!' || *(n + 1) == '?' || *(n + 1) == '"' ||
				 *(n + 1) == '(' || *(n + 1) == ')' || *(n + 1) == '{' || *(n + 1) == '}')
				*(n + i) -= 32;
		}
		i++;
	}
	return (n);
}
