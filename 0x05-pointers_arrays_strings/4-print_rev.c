#include "main.h"
#include <string.h>
/**
  * print_rev - entry point
  * @s: param
  *
  */
void print_rev(char *s)
{
	int i;
	int size = strlen(s);

	for (i = size; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
