#include <"main.h">
/**
*_isupper - Checks if a character is upper
*@c: The character to be checked.
*
* Return: 1 if character is lowercase, 0 otherwise
*/
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
