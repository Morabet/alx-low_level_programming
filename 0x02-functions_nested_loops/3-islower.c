#include "main.h"
/**
  * _islower - entry point
  * @x is the char
  * Return: 0 or 1
  */
int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
		return (1);
	else
		return (0);
}
