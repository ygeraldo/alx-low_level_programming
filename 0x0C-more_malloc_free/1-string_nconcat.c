#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concats strings
 *@s1: string one
 *@s2: string two
 *@n: n amount of bytes
 *
 *Return: return a char val
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int tall = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		tall++;
	concat = malloc(sizeof(char) * (tall + 1));
	if (concat == NULL)
		return (NULL);
	tall = 0;
	for (i = 0; s1[i]; i++)
		concat[tall++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		concat[tall++] = s2[i];
	concat[tall] = '\0';
	return (concat);
}
