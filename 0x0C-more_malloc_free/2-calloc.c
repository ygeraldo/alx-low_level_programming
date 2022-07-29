#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - calloc function
 *@nmemb: number of elements
 *@size: size of bytes
 *Return: pointer or void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *table;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	table = malloc(nmemb * size);
	if (!table)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		table[i] = 0;
	return (table);
}
