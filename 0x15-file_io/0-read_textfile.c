#include "main.h"

/**
 * read_textfile - functtion ro eread a text file
 *
 * @filename: the name of the file to be opened
 * @letters: how many letters you should read
 *
 * Return: number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL|| filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(fp, buffer, letters);
	bytes_written = write(1, buffer, bytes_read);

	if (bytes_read == -1 || bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fp);
		return (0);
	}

	free(buffer);
	close(fp);

	return(bytes_written);
}
