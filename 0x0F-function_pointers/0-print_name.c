#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that print a name
 * @name: name of the person
 * @f: function pointer take argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
