#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 * @n: The value of the times table to be printed.
 */

void print_times_table(int n)
{

	int a, b, result;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');

			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');

				result = a * b;

				if (result <= 99)
					_putchar(' ');
				if (result <= 9)
					_putchar(' ');
				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10)) % 10 + '0');
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
