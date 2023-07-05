#include "main.h"
#include <stdio.h>
/**
  * rev - entry point
  * @s: param
  *
  * Return: void
  */
void rev(char *s)
{
	if (*s > '\0')
		rev(++s);
	_putchar(*s);
}
/**
  * _print_rev_recursion - prints a string in reverse.
  * @s: pointer to pointer to string.
  *
  * Return: void.
  */
void _print_rev_recursion(char *s)
{
	rev(s);

	_putchar('\n';
}
