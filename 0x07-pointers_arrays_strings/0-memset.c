#include "main.h"
/**
 *_memset - fills the first n bytes of the memory area pointed to by s 
 *		with the constant byte b
 *@s: array to set
 *@b: value to set it as
 *@n: n amount of times
 *Return: char value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
