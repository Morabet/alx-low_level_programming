#include "main.h"
#include <string.h>
/**
  * puts2 - entry point
  * @str: param
  *
  */
void puts2(char *str)
{
	int i = 0;
	int size = strlen(str);

	while (i < size)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
