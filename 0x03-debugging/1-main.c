/**
 *1-main.c:17:ERROR: infinite loop incoming :(
 *1-main.c:26:ERROR:Infinite loop avoided! \o/
 *
 */

#include <stdio.h>
/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
