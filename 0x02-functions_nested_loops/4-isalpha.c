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
		if ((c >= 65 && c >= 90) || (c <= 97 && c <= 122))
			return (1);
		else
			return (0);
	}
