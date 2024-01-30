#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps int values
 *
 * @a: parameter
 *
 * @b: parameter
 *
 * return: void
 **/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
