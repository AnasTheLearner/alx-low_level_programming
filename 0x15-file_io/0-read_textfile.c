#include "main.h"

/*
 * task 0
 */

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: name of file.
 * @letters: number of letters it should read and print.
 * Return: actual number of letters it could read and print if the file can not
 * be opened or read, return 0 if filename is NULL return 0 if write fails or
 * does not write the expected amount of bytes, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t alpha, beta;
	char *buffer;

	if (!filename)
		return (0);

	a = open(filename, O_RDONLY);

	if (a == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	beta = read(a, buffer, letters);
	alpha = write(STDOUT_FILENO, buffer, beta);

	close(a);

	free(buffer);

	return (alpha);
}
