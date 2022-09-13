#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: Always 0 (Succes)
 *
 */
void print_alphabet_x10(void)
{
	int c, j;

	for (j = 0; j <= 9; j++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{	
			_putchar(c);
		}
	}
	_putchar('\n');

}
