#include "main.h"
/**
 *_strncpy - Copies a string.
 *@dest: destination of copy
 *@src: source array to copy
 *@n: amount of places to coopy
 *
 *Return: value of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; dest[i] != '\0'; ++i)
	{
		src[i] = dest[i];
	}
	src[i] = '\0';
	return (dest);
}
