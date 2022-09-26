#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to found
 *
 * Return: pointer to s or null
 */

char *_strchr(char *s, char c)
{
	int i

	for (i = 0; *(s + i); i++)
	{
		if (*(s + 1) == c)
			return (s + i);
	}
	if (*(s + 1) == c)
		return (s + i);
	return (0);
}
