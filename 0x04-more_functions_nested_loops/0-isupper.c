#include "main.h"
#include <stdio.h>

/**
 * _isupper - to know uppercase letters
 * @c: lower or upper case
 * main - check the code.
 * Return: 1 if character is uppercase
 *
 */




int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')

		return (1);

	else
		return (0);
}
