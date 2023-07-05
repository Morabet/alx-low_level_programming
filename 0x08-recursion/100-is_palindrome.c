#include "main.h"
#include <string.h>
/**
 * is_pal - is string palindrome.
 * @s: string.
 * @i: iterator.
 * @size: size of string.
 *
 * Return: int.
 */
int is_pal(char *s, int i, int size)
{
	if (i >= size)
		return (1);

	if (s[i] != s[size])
		return (0);

	return (is_pal(s, i + 1, size - 1));
}

/**
 * is_palindrome - is string palindrome.
 * @s: string.
 *
 * Return: int.
 */
int is_palindrome(char *s)
{
	int size = strlen(s);

	if (size == 0)
		return (1);

	return (is_pal(s, 0, size - 1));
}

