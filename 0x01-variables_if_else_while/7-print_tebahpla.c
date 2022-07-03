#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Program that prints the lowercase alphabet in reverse
 *followed by new line
 *
 *Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putcher(letter);
	putchar('\n');
	return (0)
}
