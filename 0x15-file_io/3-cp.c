#include "main.h"

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
	int fd, fp_one, fp_two; /* fp_one file from */ /* fp_two file to */
	char *buffer;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		return (97);
	}

	fp_two = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 664);

	/* O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH */

	fp_one = open(argv[1], O_RDONLY);
	
	if (fp_one == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	if (fp_two == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[2]);
		return (99);
	}


	buffer = malloc(BUFFER_SIZE * sizeof(char));

	read(fp_one, buffer, BUFFER_SIZE);

	write(fp_two, buffer, BUFFER_SIZE);

	free(buffer);

	fd = close(fp_one);
	if (fd == -1)
	{	
		fprintf(stderr, "Error: Can't close fd %d\n", fp_one);
		return (100);
	}

	fd = close(fp_two);
	if (fd == -1)
	{	
		fprintf(stderr, "Error: Can't close fd %d\n", fp_two);
		return (100);
	}

	return (1);
}
