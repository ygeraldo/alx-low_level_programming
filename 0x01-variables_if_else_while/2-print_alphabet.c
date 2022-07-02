#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Prints the alphabet in lowercase
 *
 * return: 0 if success
 **/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
