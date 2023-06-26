#include "main.h"
#include <string.h>
/**
  * puts_half - entry point
  * @str: param
  *
  */
void puts_half(char *str)
{
	int i, sizehalf;
	int size = strlen(str);

	if (size % 2 == 0)
		sizehalf = size / 2;
	else
		sizehalf = (size - 1) / 2;
	for (i = sizehalf; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
