#include "main.h"

/**
 * _isalpha - check for alopha lower case
 * @c: lower or upper case
 *
 * Return: 1 if character is lowercase
 *
 **/

int _isalpha(int c)
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			return (1);
		else
			return (0);
	}
