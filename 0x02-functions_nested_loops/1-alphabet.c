#include<stdio.h>
/*
 *
 */
/**
 *  main - prints alphabet
 *  Return : 0
 */
void print_alphabet(void)
	{
	char i;
	for(i='a';i<='z';i++)
		putchar(i);
	printf("\n");
}

int main(void)
	{
	print_alphabet();
	return (0);
}
