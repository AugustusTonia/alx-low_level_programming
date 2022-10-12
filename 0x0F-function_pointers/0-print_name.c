#include "function_pointers.h"

/**
 * print_name - function call to Print a name.
 * @name: The printed name to output
 * @f: name function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
