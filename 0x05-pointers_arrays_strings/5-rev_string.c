#include "main.h"
#include <string.h>
/**
  *  rev_string- entry point
  * @s: param
  *
  */
void rev_string(char *s)
{
	int i;
	int size = strlen(s);
	char t;


	for (i = 0; i <= (size / 2); i++)
	{
		t = s[i];
		s[i] = s[size - 1 - i];
		s[size - i] = t;
	}
}
