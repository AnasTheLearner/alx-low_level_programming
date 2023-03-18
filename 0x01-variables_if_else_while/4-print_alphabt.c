/*
 * task: 4
 */

#include <stdio.h>

/**
 * main - print alphabets lowercase except the q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
{
	if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
	putchar('\n');
	return (0);
}
