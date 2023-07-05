#include "main.h"
/**
 * _strlen_recursion - length of a string.
 * @s: pointer to string.
 *
 * Return: int.
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
		return (n + _strlen_recursion(++s) + 1);
	else
		return (0);
}
