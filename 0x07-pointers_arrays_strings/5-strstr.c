#include "main.h"

/**
 * _strstr - locating a substring
 * @haystack: string in which to check for needle
 * @needle: substring to find in haystack
 *
 * Return: pointer to beginning of needle in haystack or NULL if np match
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int a;
	int compare = 0;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (haystack[i] != 0)
	{
		j = 0;
		a = i;
		while (needle[j] != 0)
		{
			if (needle[j] == haystack[a])
			{
				compare = 1;

			}
			else
			{
				compare = 0;
				break;
			}
			j++;
			a++;
		}
		if (compare == 1)
		{
			return (haystack + i);
		}
		i++;
	}
	return (0);
}

