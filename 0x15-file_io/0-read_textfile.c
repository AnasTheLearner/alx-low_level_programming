#include "main.h"
#include <stdlib.h>

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
	ssize_t ab, cd, ef;
	char *bof;

	if (filename == NULL)
		return (0);

	bof = malloc(sizeof(char) * letters);
	if (bof == NULL)
		return (0);

	ab = open(filename, O_RDONLY);
	cd = read(ab, bof, letters);
	ef = write(STDOUT_FILENO, bof, cd);

	if (ab == -1 || cd == -1 || ef == -1 || ef != r)
	{
		free(bof);
		return (0);
	}
	free(bof);
	close(ab);
	return (ef);
}
