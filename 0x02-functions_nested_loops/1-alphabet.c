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
		_putchar(i);
	_putchar('\n');
}

int main(void)
	{
	print_alphabet();
	return (0);
}
