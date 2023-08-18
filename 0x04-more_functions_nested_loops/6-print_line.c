#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: the numer given by user
 * Return: If n is 0 or less, the function should only print \n
 */

void print_line(int n)
{

	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		_putchar('_');
	}

	_putchar('\n');

}
