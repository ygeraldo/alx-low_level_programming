#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '10')
		printf("%d", a--);

	printf('\n');

	return (0);
}
