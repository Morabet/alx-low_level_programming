#include "main.h"
/**
  * swap_int - entry point
  * @a: param
  * @b: param
  *
  */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
