#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - that returns the length of a string
 * @s : string
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}

