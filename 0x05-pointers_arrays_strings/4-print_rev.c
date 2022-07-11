#include "main.h"
#include <string.h>
/**
 *print_rev - Prints a string in reverse.
 *
 *@s: The string to be printed.
 */
void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = n - 1; i>= 0; i--)
	{
		-putchar(s[i]);
	}
	_putchar('\n');
}
