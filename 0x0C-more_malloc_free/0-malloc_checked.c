#include "main.h"
#include <stdio.h>
#include <stdlib>
/**
 *malloc_checked - allocates memory using malloc
 *@b: integer to check?
 *
 *Return: a pointer or void
 */
void *malloc_checked(unsigned int b)
{
	void *mem;
	mem = (void *)malloc sizeof((int) * b);
	if (mem == NULL)
		exit(98)
		return (mem);
}
