#include "main.h"

/**
* _isdigit - determine if digit. 
* @c: character to determine.
* Return: 1 if the number is a digit, 0 otherwise.
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
