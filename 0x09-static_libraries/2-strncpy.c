#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copy a string
 * @dest: The destination value
 * @dest: The destination value
 * @src: The source value
 * @n: The copy limit
 *
 * Return: char value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];

	for ( ; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
