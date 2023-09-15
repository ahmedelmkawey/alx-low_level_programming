#include "variadic_functions.h"

/**
 * sum_them_all -entry point
 * @n: number arguments
 * Return: total addition sum
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list arg_p;

	unsigned int i = 0;

	int add = 0;

	if (n == 0)
		return (0);

	va_start(arg_p, n);

	for (i = 0; i < n; i++)

		add += va_arg(arg_p, int);

	va_end(arg_p);

	return (add);
}
