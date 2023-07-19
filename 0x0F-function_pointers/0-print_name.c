#include "function_pointers.h"
/**
 * print_name -  print name.
 * @name: pointer to the name.
 * @f: a pointer to a function that takes a pointer to string
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
