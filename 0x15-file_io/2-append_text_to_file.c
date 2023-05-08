#include "main.h"

/*
 * task 2
 */

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file.
 * @text_content: content to be added.
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int alpha, beta, num;

	if (!filename)
		return (-1);

	alpha = open(filename, O_WRONLY | O_APPEND);

	if (alpha == -1)
		return (-1);

	if (text_content)
	{
		for (num = 0; text_content[num]; num++)
			;

		beta = write(alpha, text_content, num);

		if (beta == -1)
			return (-1);
	}
	close(alpha);
	return (1);
}
