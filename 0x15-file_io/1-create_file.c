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
	int fp;
	int bytes_written, len;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytes_written = write(fp, text_content, len);
		if (bytes_written == -1 || bytes_written != len)
		{
			close(fp);
			return (-1);
		}
	}

	close(fp);
	return (1);
}
