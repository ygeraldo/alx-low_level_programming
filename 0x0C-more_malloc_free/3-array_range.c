#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - range of arrays
 *@min: min of arrange
 *@max: max of arrays
 *Return: int value
 */
int *array_range(int min, int max)
{
	int *table = 0;
	int i = 0;

	if (min > max)
		return (NULL);
	table = (int *)malloc(sizeof(int) * (max - min + 1));
	if (!table)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
		table[i] = min + i;
	return (table);
}
