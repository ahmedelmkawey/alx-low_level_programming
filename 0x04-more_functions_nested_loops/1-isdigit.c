#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for lowercase character
 *
 * @c: diit or not
 *
 * Return: 1 if digit
 *
 */

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
