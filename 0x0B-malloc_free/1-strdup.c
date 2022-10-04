#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  contains a copy of the string given as a parameter.
 * @str: char 
 *
 * return: 0
 */

char *_strdup(char *str)
{
	char *array;
	int j, r = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while(str[j] ! = '\0')
		j++;

	array = malloc(sizeof(char) *(j + 1));

	if (array == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		array[r] = str[r];

	return (array);
}


