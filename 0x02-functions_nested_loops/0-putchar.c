#include "main.h"
/**
  * main - entry point
  *
  * Return: always (success)
  */
int main(void)
{
	char c[8] = "_putchar";
	int i;

	for (i = 0 ; i < 8 ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
