#include "main.h"



/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_num;
	unsigned int i;

	for (decimal_num = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			decimal_num = (decimal_num << 1) | 1;
		else if (b[i] == '0')
			decimal_num <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (decimal_num);
}
