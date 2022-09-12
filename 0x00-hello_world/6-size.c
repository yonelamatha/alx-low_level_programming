#include<stdio.h>

/**
 * main- print main function
 *
 * Description: C program that prints the size of various types\
 * on the computer it is compiled and run on
 *
 * return 0
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(d));
	printf("Size of an int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
