#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function to copy array
 * @dest : pointer to an array
 * @src : pointer to an array
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{

        while (*src)
	{
 	   *dest = *src;
	   src++;
	   dest++;
	}
	return (dest);
}
