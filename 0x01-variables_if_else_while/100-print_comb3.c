/*
 * file: task 10
 */

#include <stdio.h>
/**
 * main : print random combination
 */
int main(void)
{

	int i,j;
	for (i=0;i<9;i++){
		for (j=9;j>i;j--){
	        	putchar(i);
			putchar(10+i-j);
			putchar(',');
			putchar(' ');
                             }
                       }
return (0);

}
