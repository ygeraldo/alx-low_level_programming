#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates array
 *@size: size of array to create
 *@c: char to initialize with?
 *Return: char value
 */
char *_strdup(char *str);
{
	int i;
	int n = 0;
	char * ptr;

	if (str == NULL)
		return (NULL)
	while (str[n] != '\n')
		n++
	ptr = malloc(sizeof(char) * n+1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		ptr[n] = str[i];
	return (ptr);
}
