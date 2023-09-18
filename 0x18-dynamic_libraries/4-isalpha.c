#include "main.h"
/**
  * _isalpha - entry point
  * @x: is a letter
  *
  * Return: 0 or 1
  */
int _isalpha(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		return (1);
	else
		return (0);
}
