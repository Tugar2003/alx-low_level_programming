#include "main.h"

/**
 * read_textfile - Reads and prints a text file to stdout
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual num of letters read and printed.0 error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, byte_r, byte_w;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	byte_r = read(fd, buffer, letters);
	if (byte_r == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	byte_w = write(STDOUT_FILENO, buffer, byte_r);
	if (byte_w == 1 || byte_w != byte_r)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);

	return (byte_w);
}
