#include "main.h"
#include <stdio.h>
/**
  * _print - prints a string in reverse.
  * @s: pointer to pointer to string.
  *
  * Return: void.
  */
void _print(char *s)
{
	if (*s > '\0')
	{
		_print(++s);
		_putchar(*s);
	}
}
/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: pointer to pointer to string.
 *
 * Return: void.
 */
void  _print_rev_recursion(char *s)
{
	_print(s);
}
