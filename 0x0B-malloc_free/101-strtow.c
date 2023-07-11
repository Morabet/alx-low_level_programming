#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - count words
 * @s: pointer to string
 *
 * Return: num of words in string.
 */
int count_words(char *s)
{
	int i, in_word = 0, count = 0;
	int size = strlen(s);

	for (i = 0; i <= size; i++)
	{
		if (s[i] != ' ' && s[i] != '\0')
			in_word = 1;
		if ((s[i] == ' ' || s[i] == '\0') && in_word == 1)
		{
			count++;
			in_word = 0;
		}
	}
	return (count);
}
/**
 * count_letters - count letters
 * @s: pointer to string
 *
 * Return: num of letters
 */
int count_letters(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != ' ' && s[i] != '\0'; i++)
	{
		count++;
	}

	return (count);
}


/**
 * strtow -  function that splits a string into word
 * @str: pointer to string
 *
 * Return: pointer to array
 */
char **strtow(char *str)
{
	char **s;
	int i, j, words, letters, l, n;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	words = count_words(str);
	if (words == 0)
		return (NULL);
	s = malloc(sizeof(*s) * (words + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < words; i++)
	{
		while (str[j] == ' ')
			j++;

		letters = count_letters(str + j);
		*(s + i) = malloc(sizeof(**s) * (letters + 1));

		if (*(s + i) == NULL)
		{
			for (n = 0; n < i; n++)
				free(*(s + n));
			free(s);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
		{
			s[i][l] = str[j++];
		}
		s[i][l] = '\0';
	}
	s[i] = NULL;
	return (s);
}
