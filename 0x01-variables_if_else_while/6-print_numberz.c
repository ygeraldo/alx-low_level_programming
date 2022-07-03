#include <stdlib.h>
#include <time.h> 
#include <stdio.h>
/*
 *main - assign a random number to the variable num each time it is executed
 *only using putchar and without char variables.
 *
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	
	putchar("\n");  

	return (0);
}
