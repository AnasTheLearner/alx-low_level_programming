#include "main.h"

/*
 * task 1
 */

/**
 * create_file - Creates a File.
 * @filename: name of file
 * @text_content: Content to be writed
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1.
 */

int create_file(const char *filename, char *text_content)
{
	int alpha, beta, num;

	if (!filename)
		return (-1);

	alpha = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (alpha == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num = 0; text_content[num]; num++)
		;

	beta = write(alpha, text_content, num);

	if (beta == -1)
		return (-1);

	close(alpha);
	return (1);
}
