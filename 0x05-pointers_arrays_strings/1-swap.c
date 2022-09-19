#include "main.h"

/**
 * swap_int - swap two intergers values
 * @a : first interger
 * @b : second interger
 * Return : Return nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
