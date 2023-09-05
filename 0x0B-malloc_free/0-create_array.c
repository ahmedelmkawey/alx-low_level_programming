#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - writes the character c to stdout
 * @size: The character to print
 * @c: The character to print
 * Return: pointer to array or null
 *
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	x = malloc(sizeof(char) * size);

	if (x == NULL)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			x[i] = c;
		}
	}
	return (x);
}
