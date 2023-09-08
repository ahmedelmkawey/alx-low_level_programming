#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers.
 * @min: starting elements.
 * @max: ending elements.
 * Return: returns a pointer to an array of elements.
 */

int *array_range(int min, int max)
{
	int i, j = 0;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc(max - min + 1);
	if (array == NULL)
		return (NULL);
	for (i = min; i <= max; i++, j++)
		array[j] = i;
	return (array);
}
