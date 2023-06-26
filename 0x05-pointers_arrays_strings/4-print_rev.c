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

	for (i = 0; i <= size; i++)
	{
		s[i] = s[size - i];
		_putchar(*s);
	}
	_putchar('\n');
}
