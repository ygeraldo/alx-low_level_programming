#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - creates an array of integers.
 *@min: min of arrange
 *@max: max of arrays
 *
 *Return: int value
 */
int *array_range(int min, int max)
{
	int *tab = 0;
	int i = 0;

	if (min > max)
		return (0);
	tab = (int *)malloc(sizeof(int) * (max - min + 1));
	if (!tab)
		return (0);

	for (i = 0; i < (max - min + 1); i++)
			tab[i] = min + i;
	return (tab);
}
