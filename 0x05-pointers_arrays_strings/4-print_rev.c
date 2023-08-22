#include "main.h"

/**
 * print_rev -  that prints a string, followed by a new line
 * @s : string to print
 * Return: Always 0.
 */

void print_rev(char *s)

{
	int a;

	for (a = 0; s[a] != 0; a++)
		;
	for (a = a - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
