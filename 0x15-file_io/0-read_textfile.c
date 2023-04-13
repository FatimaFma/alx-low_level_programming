#include "main.h"
/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: char string of files name
 * @letters: number of letters it should read and print
 * Return: number of letters read and printed, 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w;
	int f;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	f = open(filename, O_RDWR);
	if (f == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	r = read(f, buffer, letters);
	if (r == -1)
	{
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if ((w == -1) || r != w)
	{
		return (0);
	}
	free(buffer);
	close(f);
	return (w);
}
