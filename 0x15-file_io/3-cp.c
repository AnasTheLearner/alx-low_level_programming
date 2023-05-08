#include "main.h"

/*
 * task 3
 */

char *init_buf(char *doc);
void close_doc(int dd);

/**
 * init_buffer - allocation of 1024B buf
 * @doc: name of file
 * Return: pointer
 */

char *init_buf(char *doc)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * close_doc - closes doc
 * @dd: file to be closed
 */

void close_doc(int dd)
{
	int ch;

	ch = close(dd);

	if (ch == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: arguments count
 * @argv: array of pointers
 * Return: 0
 * Description: if arguments count incorrect exit code 97
 * if file_from does not exist, or if you can not read it, exit with code 98
 * if file_to fails, exit with code 99
 * if you can not close a file descriptor , exit with code 100
 */

int main(int argc, char *argv[])
{
	int de, aa, rd, wr;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = init_buf(argv[2]);
	de = open(argv[1], O_RDONLY);
	rd = read(de, buf, 1024);
	aa = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (de == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		wr = write(aa, buf, rd);
		if (aa == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		rd = read(de, buf, 1024);
		aa = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buf);
	close_doc(de);
	close_doc(aa);
	return (0);
}
