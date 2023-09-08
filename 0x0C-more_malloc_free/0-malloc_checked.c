#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>



/**
 * malloc_checked - Allocates memory using malloc.
 * @b: size used to initialize
 *
 * Return: pointer.
 */

void *malloc_checked(unsigned int b)
{
	void *array = malloc(b);

	if (array == NULL)
		exit(98);
	return (array);
}
