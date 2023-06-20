#include "main.h"
/**
  * print_last_digit - entry point
  * @x: param
  *
  * Return: value of the last digits
  */
int print_last_digit(int x)
{
	if (x < 0)
		x = -x;
	return (x % 10);
}
