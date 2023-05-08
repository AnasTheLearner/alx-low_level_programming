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
	int st;
	ssize_t hya, hyb;
	char *bof;

	if (!filename)
		return (0);

	st = open(filename, O_RDONLY);

	if (st == -1)
		return (0);

	bof = malloc(sizeof(char) * (letters));
	if (!bof)
		return (0);

	hyb = read(st, bof, letters);
	hya = write(STDOUT_FILENO, bof, hyb);
	close(st);
	free(bof);
	return (hya);
}
