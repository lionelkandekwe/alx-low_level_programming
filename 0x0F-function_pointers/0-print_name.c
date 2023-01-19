#include "function_pointers.h"

/**
 * print_name - a function that print name
 * @name: the name given
 * @f: function of name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
