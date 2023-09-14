#include "function_pointers.h"

/**
 * print_name - print a name using the function
 * @name: the name
 * @f: the function to call for printing the name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
