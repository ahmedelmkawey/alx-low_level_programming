#include "main.h"
#include <stdio.h>

/**
 * _strlen - that returns the length of a string
 * @s : string
 * Return: Always 0.
 */

int _strlen(char *s)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = strlen(str);

	printf("%d\n", len);
	return (0);
}

