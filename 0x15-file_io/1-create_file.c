#include "main.h"

/**
 * create_file - function to create a file
 *
 * @filename: name of the file
 * @text_content: content of the text
 *
 * Return: 1 on Success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	FILE* fp;
	size_t bytes_written;
	char *buffer;

	buffer = malloc(strlen(text_content) * sizeof(char));

	if (buffer == NULL || filename == NULL)
		return (-1);

	fp = fopen(filename, "w+");

	if (fp == NULL)
	{
		free(buffer);
		return (-1);
	}

	bytes_written = fwrite(buffer, 1 , sizeof(text_content), fp);

	if (bytes_written != strlen(text_content))
	{
		free(buffer);
		fclose(fp);
		return (0);
	}
	free(buffer);
	fclose(fp);

	return (1);

}
