#include <stdio.h>

/*
 * task 5
 */

void __attribute__((constructor)) beforemain(void);

/**
 * beforemain - print string before main function executed
 * Return: nothing
 */

void beforemain(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
