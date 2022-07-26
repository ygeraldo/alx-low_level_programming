#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates array
 *@size: size of array to create
 *@c: char to initialize with?
 *Return: char value
 */
char *_strdup(char *str)
{
	int i;
	int c = 0;
	char *t;

	if (str == NULL)
		return (NULL);

	while (str[c] != '\0')
		c++;

	t = malloc(sizeof(char) * c + 1);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		t[i] = str[i];
	return (t);
}
