#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - assign a random number to the variable num each time it is executed
 *prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
