#include "main.h"

/**
 * more_numbers - to print numbers from 1 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int line, num;

	for (line = 0; line <= 9; line++)
	{
		for (num = '0'; num <= 14; num++)
		{
			_putchar(num);
		}
			_putchar('\n');

	}
}
