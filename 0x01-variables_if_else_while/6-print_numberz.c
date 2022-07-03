#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Print all single digit numbers of base 10 starting from 0
 *followed by new line
 *
 */
int main(void)
{	
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');
	return (0);
}
