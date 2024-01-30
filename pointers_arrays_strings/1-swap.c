#include <stdio.h>
#include "main.h"

/**
 * reset_to_98(int *n) - changes the value of the parameter
 *
 * @n: parameter
 *
 * return:0
 * */

   
void reset_to_98(int *n)
{
	int n = 402;

	int* ptr = &n;

	*ptr = 98;

	_putchar ("%c", n);
	
	return (0);
}
