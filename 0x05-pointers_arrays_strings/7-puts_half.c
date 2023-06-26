#include "main.h"
#include <string.h>
/**
  * puts_half - entry point
  * @str: param
  *
  */
void puts_half(char *str)
{
	int i;
	int size = strlen(str);

	for (i = ((size - 1) / 2); i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
