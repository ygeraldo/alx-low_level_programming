#include <stdlib.>
#include <time.h>
#include <stdlib.h>
/**
 * main - Task 3 prints the alphabet in lowercase, and the in uppercase
 * followed by a new line
 *
 * return: 0
 **/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
