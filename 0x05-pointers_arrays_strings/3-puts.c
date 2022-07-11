#include "main.h"
/**
 *_puts - puts a string
 *
 *@str: string to print
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
