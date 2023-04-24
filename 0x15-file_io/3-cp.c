#include "main.h"

#define BUFFER_SIZE 1024

/**
 * check_error - function to check errors
 *
 * @error: number of the error
 * @file_name: name of the file closed or opened
 * @fd: file descriptor
 *
 * Return: void
 *
 */


void check_error(int error, char *file_name, int fd)
{
	switch (error)
	{
		case 97:
			fprintf(stderr, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			fprintf(stderr, "Error: Can't read from file %s\n", file_name);
			exit(error);
		case 99:
			fprintf(stderr, "Error: Can't read from file %s\n", file_name);
			exit(error);
		case 100:
			fprintf(stderr, "Error: Can't close fd %d\n", fd);
			exit(error);
	}
}

/**
 * main - main functions
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return 0 (Success)
 *
 */


int main(int argc, char *argv[])
{
	int file_to, file_from;
	int read_file, write_file;
	int close_file;
	char buffer[BUFFER_SIZE];


	if (argc != 3)
		check_error(97, NULL, 0);

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
		check_error(98, argv[1], 0);

	file_to = open(argv[2],  O_CREAT | O_TRUNC | O_WRONLY, 664);

	if (file_to == -1)
		check_error(99, argv[2], 0);

	read_file = read(file_from, buffer, BUFFER_SIZE);

	while (read_file != 0)
	{
		if (read_file == -1)
			check_error(99, argv[1], 0);

		write_file = write(file_to, buffer, read_file);

		if (write_file == -1)
			check_error(99, argv[2], 0);
	}

	close_file = close(file_from);
	if (close_file == -1)
		check_error(100, NULL, file_from);

	close_file = close(file_to);
	if (close_file == -1)
		check_error(100, NULL, file_to);

	return (0);

}
