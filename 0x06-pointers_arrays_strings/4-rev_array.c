#include "main.h"
/**
  * reverse_array - entry point
  * @a: param
  * @n: param
  *
  */
void reverse_array(int *a, int n)
{
	int *start, *end;
	int t;

	start = a;
	end = a + n - 1;

	while (start < end)
	{
		t = *start;
		*start = *end;
		*end = t;

		start++;
		end--;
	}
}
